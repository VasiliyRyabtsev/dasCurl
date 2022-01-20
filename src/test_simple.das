require curl

[export]
def main
    let curl = curl_easy_init()
    if curl==null
        print("Initialization failed\n")
    curl_easy_setopt(curl, CURLoption CURLOPT_URL, "https://example.com");

    // example.com is redirected, so we tell libcurl to follow redirection
    curl_easy_setopt(curl, CURLoption CURLOPT_FOLLOWLOCATION, 1u);
   
    var res = curl_easy_perform(curl)
    if (res != CURLcode CURLE_OK)
        print("curl_easy_perform() failed: {curl_easy_strerror(res)}\n")

    curl_easy_cleanup(curl)
    print("Done\n")
