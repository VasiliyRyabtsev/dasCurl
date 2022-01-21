require curl
require daslib/safe_addr

// Single HTTP request demo

[export]
def main
    curl_global_init(int(0xFF))

    var http_handle = curl_easy_init()
    curl_easy_setopt(http_handle, CURLoption CURLOPT_URL, "https://www.example.com/")

    var multi_handle = curl_multi_init()
    curl_multi_add_handle(multi_handle, http_handle)

    while true
        var running_handles:int = 0
        var mc = curl_multi_perform(multi_handle, safe_addr(running_handles))
        if running_handles==0
            break
        if mc != CURLMcode CURLM_OK
            print("curl_multi_poll() failed, code {mc}.\n")
            break

        // wait for activity, timeout or "nothing"
        mc = curl_multi_poll(multi_handle, null, 0u, 1000, null)


    curl_multi_remove_handle(multi_handle, http_handle)
    curl_easy_cleanup(http_handle)
    curl_multi_cleanup(multi_handle)
    curl_global_cleanup()
