/* evaluates to true if option takes a long argument */
#define curlcheck_long_option(option)                   \
  (0 < (option) && (option) < CURLOPTTYPE_OBJECTPOINT)

#define curlcheck_off_t_option(option)          \
  (((option) > CURLOPTTYPE_OFF_T) && ((option) < CURLOPTTYPE_BLOB))

/* evaluates to true if option takes a char* argument */
#define curlcheck_string_option(option)                                       \
  ((option) == CURLOPT_ABSTRACT_UNIX_SOCKET ||                                \
   (option) == CURLOPT_ACCEPT_ENCODING ||                                     \
   (option) == CURLOPT_ALTSVC ||                                              \
   (option) == CURLOPT_CAINFO ||                                              \
   (option) == CURLOPT_CAPATH ||                                              \
   (option) == CURLOPT_COOKIE ||                                              \
   (option) == CURLOPT_COOKIEFILE ||                                          \
   (option) == CURLOPT_COOKIEJAR ||                                           \
   (option) == CURLOPT_COOKIELIST ||                                          \
   (option) == CURLOPT_CRLFILE ||                                             \
   (option) == CURLOPT_CUSTOMREQUEST ||                                       \
   (option) == CURLOPT_DEFAULT_PROTOCOL ||                                    \
   (option) == CURLOPT_DNS_INTERFACE ||                                       \
   (option) == CURLOPT_DNS_LOCAL_IP4 ||                                       \
   (option) == CURLOPT_DNS_LOCAL_IP6 ||                                       \
   (option) == CURLOPT_DNS_SERVERS ||                                         \
   (option) == CURLOPT_DOH_URL ||                                             \
   (option) == CURLOPT_EGDSOCKET ||                                           \
   (option) == CURLOPT_FTPPORT ||                                             \
   (option) == CURLOPT_FTP_ACCOUNT ||                                         \
   (option) == CURLOPT_FTP_ALTERNATIVE_TO_USER ||                             \
   (option) == CURLOPT_HSTS ||                                                \
   (option) == CURLOPT_INTERFACE ||                                           \
   (option) == CURLOPT_ISSUERCERT ||                                          \
   (option) == CURLOPT_KEYPASSWD ||                                           \
   (option) == CURLOPT_KRBLEVEL ||                                            \
   (option) == CURLOPT_LOGIN_OPTIONS ||                                       \
   (option) == CURLOPT_MAIL_AUTH ||                                           \
   (option) == CURLOPT_MAIL_FROM ||                                           \
   (option) == CURLOPT_NETRC_FILE ||                                          \
   (option) == CURLOPT_NOPROXY ||                                             \
   (option) == CURLOPT_PASSWORD ||                                            \
   (option) == CURLOPT_PINNEDPUBLICKEY ||                                     \
   (option) == CURLOPT_PRE_PROXY ||                                           \
   (option) == CURLOPT_PROXY ||                                               \
   (option) == CURLOPT_PROXYPASSWORD ||                                       \
   (option) == CURLOPT_PROXYUSERNAME ||                                       \
   (option) == CURLOPT_PROXYUSERPWD ||                                        \
   (option) == CURLOPT_PROXY_CAINFO ||                                        \
   (option) == CURLOPT_PROXY_CAPATH ||                                        \
   (option) == CURLOPT_PROXY_CRLFILE ||                                       \
   (option) == CURLOPT_PROXY_ISSUERCERT ||                                    \
   (option) == CURLOPT_PROXY_KEYPASSWD ||                                     \
   (option) == CURLOPT_PROXY_PINNEDPUBLICKEY ||                               \
   (option) == CURLOPT_PROXY_SERVICE_NAME ||                                  \
   (option) == CURLOPT_PROXY_SSLCERT ||                                       \
   (option) == CURLOPT_PROXY_SSLCERTTYPE ||                                   \
   (option) == CURLOPT_PROXY_SSLKEY ||                                        \
   (option) == CURLOPT_PROXY_SSLKEYTYPE ||                                    \
   (option) == CURLOPT_PROXY_SSL_CIPHER_LIST ||                               \
   (option) == CURLOPT_PROXY_TLS13_CIPHERS ||                                 \
   (option) == CURLOPT_PROXY_TLSAUTH_PASSWORD ||                              \
   (option) == CURLOPT_PROXY_TLSAUTH_TYPE ||                                  \
   (option) == CURLOPT_PROXY_TLSAUTH_USERNAME ||                              \
   (option) == CURLOPT_RANDOM_FILE ||                                         \
   (option) == CURLOPT_RANGE ||                                               \
   (option) == CURLOPT_REFERER ||                                             \
   (option) == CURLOPT_REQUEST_TARGET ||                                      \
   (option) == CURLOPT_RTSP_SESSION_ID ||                                     \
   (option) == CURLOPT_RTSP_STREAM_URI ||                                     \
   (option) == CURLOPT_RTSP_TRANSPORT ||                                      \
   (option) == CURLOPT_SASL_AUTHZID ||                                        \
   (option) == CURLOPT_SERVICE_NAME ||                                        \
   (option) == CURLOPT_SOCKS5_GSSAPI_SERVICE ||                               \
   (option) == CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 ||                             \
   (option) == CURLOPT_SSH_HOST_PUBLIC_KEY_SHA256 ||                          \
   (option) == CURLOPT_SSH_KNOWNHOSTS ||                                      \
   (option) == CURLOPT_SSH_PRIVATE_KEYFILE ||                                 \
   (option) == CURLOPT_SSH_PUBLIC_KEYFILE ||                                  \
   (option) == CURLOPT_SSLCERT ||                                             \
   (option) == CURLOPT_SSLCERTTYPE ||                                         \
   (option) == CURLOPT_SSLENGINE ||                                           \
   (option) == CURLOPT_SSLKEY ||                                              \
   (option) == CURLOPT_SSLKEYTYPE ||                                          \
   (option) == CURLOPT_SSL_CIPHER_LIST ||                                     \
   (option) == CURLOPT_TLS13_CIPHERS ||                                       \
   (option) == CURLOPT_TLSAUTH_PASSWORD ||                                    \
   (option) == CURLOPT_TLSAUTH_TYPE ||                                        \
   (option) == CURLOPT_TLSAUTH_USERNAME ||                                    \
   (option) == CURLOPT_UNIX_SOCKET_PATH ||                                    \
   (option) == CURLOPT_URL ||                                                 \
   (option) == CURLOPT_USERAGENT ||                                           \
   (option) == CURLOPT_USERNAME ||                                            \
   (option) == CURLOPT_AWS_SIGV4 ||                                           \
   (option) == CURLOPT_USERPWD ||                                             \
   (option) == CURLOPT_XOAUTH2_BEARER ||                                      \
   (option) == CURLOPT_SSL_EC_CURVES ||                                       \
   0)

/* evaluates to true if option takes a curl_write_callback argument */
#define curlcheck_write_cb_option(option)                               \
  ((option) == CURLOPT_HEADERFUNCTION ||                                \
   (option) == CURLOPT_WRITEFUNCTION)

/* evaluates to true if option takes a curl_conv_callback argument */
#define curlcheck_conv_cb_option(option)                                \
  ((option) == CURLOPT_CONV_TO_NETWORK_FUNCTION ||                      \
   (option) == CURLOPT_CONV_FROM_NETWORK_FUNCTION ||                    \
   (option) == CURLOPT_CONV_FROM_UTF8_FUNCTION)

/* evaluates to true if option takes a data argument to pass to a callback */
#define curlcheck_cb_data_option(option)                                      \
  ((option) == CURLOPT_CHUNK_DATA ||                                          \
   (option) == CURLOPT_CLOSESOCKETDATA ||                                     \
   (option) == CURLOPT_DEBUGDATA ||                                           \
   (option) == CURLOPT_FNMATCH_DATA ||                                        \
   (option) == CURLOPT_HEADERDATA ||                                          \
   (option) == CURLOPT_HSTSREADDATA ||                                        \
   (option) == CURLOPT_HSTSWRITEDATA ||                                       \
   (option) == CURLOPT_INTERLEAVEDATA ||                                      \
   (option) == CURLOPT_IOCTLDATA ||                                           \
   (option) == CURLOPT_OPENSOCKETDATA ||                                      \
   (option) == CURLOPT_PREREQDATA ||                                          \
   (option) == CURLOPT_PROGRESSDATA ||                                        \
   (option) == CURLOPT_READDATA ||                                            \
   (option) == CURLOPT_SEEKDATA ||                                            \
   (option) == CURLOPT_SOCKOPTDATA ||                                         \
   (option) == CURLOPT_SSH_KEYDATA ||                                         \
   (option) == CURLOPT_SSL_CTX_DATA ||                                        \
   (option) == CURLOPT_WRITEDATA ||                                           \
   (option) == CURLOPT_RESOLVER_START_DATA ||                                 \
   (option) == CURLOPT_TRAILERDATA ||                                         \
   0)

/* evaluates to true if option takes a POST data argument (void* or char*) */
#define curlcheck_postfields_option(option)                                   \
  ((option) == CURLOPT_POSTFIELDS ||                                          \
   (option) == CURLOPT_COPYPOSTFIELDS ||                                      \
   0)

/* evaluates to true if option takes a struct curl_slist * argument */
#define curlcheck_slist_option(option)                                        \
  ((option) == CURLOPT_HTTP200ALIASES ||                                      \
   (option) == CURLOPT_HTTPHEADER ||                                          \
   (option) == CURLOPT_MAIL_RCPT ||                                           \
   (option) == CURLOPT_POSTQUOTE ||                                           \
   (option) == CURLOPT_PREQUOTE ||                                            \
   (option) == CURLOPT_PROXYHEADER ||                                         \
   (option) == CURLOPT_QUOTE ||                                               \
   (option) == CURLOPT_RESOLVE ||                                             \
   (option) == CURLOPT_TELNETOPTIONS ||                                       \
   (option) == CURLOPT_CONNECT_TO ||                                          \
   0)
