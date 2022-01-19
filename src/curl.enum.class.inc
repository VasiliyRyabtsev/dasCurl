// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

class Enumeration_curl_sslbackend : public das::Enumeration {
public:
	Enumeration_curl_sslbackend() : das::Enumeration("curl_sslbackend") {
		external = true;
		cppName = "curl_sslbackend";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLSSLBACKEND_NONE", "CURLSSLBACKEND_NONE", int64_t(curl_sslbackend::CURLSSLBACKEND_NONE), das::LineInfo());
		addIEx("CURLSSLBACKEND_OPENSSL", "CURLSSLBACKEND_OPENSSL", int64_t(curl_sslbackend::CURLSSLBACKEND_OPENSSL), das::LineInfo());
		addIEx("CURLSSLBACKEND_GNUTLS", "CURLSSLBACKEND_GNUTLS", int64_t(curl_sslbackend::CURLSSLBACKEND_GNUTLS), das::LineInfo());
		addIEx("CURLSSLBACKEND_NSS", "CURLSSLBACKEND_NSS", int64_t(curl_sslbackend::CURLSSLBACKEND_NSS), das::LineInfo());
		addIEx("CURLSSLBACKEND_OBSOLETE4", "CURLSSLBACKEND_OBSOLETE4", int64_t(curl_sslbackend::CURLSSLBACKEND_OBSOLETE4), das::LineInfo());
		addIEx("CURLSSLBACKEND_GSKIT", "CURLSSLBACKEND_GSKIT", int64_t(curl_sslbackend::CURLSSLBACKEND_GSKIT), das::LineInfo());
		addIEx("CURLSSLBACKEND_POLARSSL", "CURLSSLBACKEND_POLARSSL", int64_t(curl_sslbackend::CURLSSLBACKEND_POLARSSL), das::LineInfo());
		addIEx("CURLSSLBACKEND_WOLFSSL", "CURLSSLBACKEND_WOLFSSL", int64_t(curl_sslbackend::CURLSSLBACKEND_WOLFSSL), das::LineInfo());
		addIEx("CURLSSLBACKEND_SCHANNEL", "CURLSSLBACKEND_SCHANNEL", int64_t(curl_sslbackend::CURLSSLBACKEND_SCHANNEL), das::LineInfo());
		addIEx("CURLSSLBACKEND_SECURETRANSPORT", "CURLSSLBACKEND_SECURETRANSPORT", int64_t(curl_sslbackend::CURLSSLBACKEND_SECURETRANSPORT), das::LineInfo());
		addIEx("CURLSSLBACKEND_AXTLS", "CURLSSLBACKEND_AXTLS", int64_t(curl_sslbackend::CURLSSLBACKEND_AXTLS), das::LineInfo());
		addIEx("CURLSSLBACKEND_MBEDTLS", "CURLSSLBACKEND_MBEDTLS", int64_t(curl_sslbackend::CURLSSLBACKEND_MBEDTLS), das::LineInfo());
		addIEx("CURLSSLBACKEND_MESALINK", "CURLSSLBACKEND_MESALINK", int64_t(curl_sslbackend::CURLSSLBACKEND_MESALINK), das::LineInfo());
		addIEx("CURLSSLBACKEND_BEARSSL", "CURLSSLBACKEND_BEARSSL", int64_t(curl_sslbackend::CURLSSLBACKEND_BEARSSL), das::LineInfo());
		addIEx("CURLSSLBACKEND_RUSTLS", "CURLSSLBACKEND_RUSTLS", int64_t(curl_sslbackend::CURLSSLBACKEND_RUSTLS), das::LineInfo());
	}
};

class Enumeration_curlfiletype : public das::Enumeration {
public:
	Enumeration_curlfiletype() : das::Enumeration("curlfiletype") {
		external = true;
		cppName = "curlfiletype";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("FILE", "CURLFILETYPE_FILE", int64_t(curlfiletype::CURLFILETYPE_FILE), das::LineInfo());
		addIEx("DIRECTORY", "CURLFILETYPE_DIRECTORY", int64_t(curlfiletype::CURLFILETYPE_DIRECTORY), das::LineInfo());
		addIEx("SYMLINK", "CURLFILETYPE_SYMLINK", int64_t(curlfiletype::CURLFILETYPE_SYMLINK), das::LineInfo());
		addIEx("DEVICE_BLOCK", "CURLFILETYPE_DEVICE_BLOCK", int64_t(curlfiletype::CURLFILETYPE_DEVICE_BLOCK), das::LineInfo());
		addIEx("DEVICE_CHAR", "CURLFILETYPE_DEVICE_CHAR", int64_t(curlfiletype::CURLFILETYPE_DEVICE_CHAR), das::LineInfo());
		addIEx("NAMEDPIPE", "CURLFILETYPE_NAMEDPIPE", int64_t(curlfiletype::CURLFILETYPE_NAMEDPIPE), das::LineInfo());
		addIEx("SOCKET", "CURLFILETYPE_SOCKET", int64_t(curlfiletype::CURLFILETYPE_SOCKET), das::LineInfo());
		addIEx("DOOR", "CURLFILETYPE_DOOR", int64_t(curlfiletype::CURLFILETYPE_DOOR), das::LineInfo());
		addIEx("UNKNOWN", "CURLFILETYPE_UNKNOWN", int64_t(curlfiletype::CURLFILETYPE_UNKNOWN), das::LineInfo());
	}
};

class Enumeration_curlsocktype : public das::Enumeration {
public:
	Enumeration_curlsocktype() : das::Enumeration("curlsocktype") {
		external = true;
		cppName = "curlsocktype";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("IPCXN", "CURLSOCKTYPE_IPCXN", int64_t(curlsocktype::CURLSOCKTYPE_IPCXN), das::LineInfo());
		addIEx("ACCEPT", "CURLSOCKTYPE_ACCEPT", int64_t(curlsocktype::CURLSOCKTYPE_ACCEPT), das::LineInfo());
		addIEx("LAST", "CURLSOCKTYPE_LAST", int64_t(curlsocktype::CURLSOCKTYPE_LAST), das::LineInfo());
	}
};

class Enumeration_curlioerr : public das::Enumeration {
public:
	Enumeration_curlioerr() : das::Enumeration("curlioerr") {
		external = true;
		cppName = "curlioerr";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLIOE_OK", "CURLIOE_OK", int64_t(curlioerr::CURLIOE_OK), das::LineInfo());
		addIEx("CURLIOE_UNKNOWNCMD", "CURLIOE_UNKNOWNCMD", int64_t(curlioerr::CURLIOE_UNKNOWNCMD), das::LineInfo());
		addIEx("CURLIOE_FAILRESTART", "CURLIOE_FAILRESTART", int64_t(curlioerr::CURLIOE_FAILRESTART), das::LineInfo());
		addIEx("CURLIOE_LAST", "CURLIOE_LAST", int64_t(curlioerr::CURLIOE_LAST), das::LineInfo());
	}
};

class Enumeration_curliocmd : public das::Enumeration {
public:
	Enumeration_curliocmd() : das::Enumeration("curliocmd") {
		external = true;
		cppName = "curliocmd";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NOP", "CURLIOCMD_NOP", int64_t(curliocmd::CURLIOCMD_NOP), das::LineInfo());
		addIEx("RESTARTREAD", "CURLIOCMD_RESTARTREAD", int64_t(curliocmd::CURLIOCMD_RESTARTREAD), das::LineInfo());
		addIEx("LAST", "CURLIOCMD_LAST", int64_t(curliocmd::CURLIOCMD_LAST), das::LineInfo());
	}
};

class Enumeration_curl_infotype : public das::Enumeration {
public:
	Enumeration_curl_infotype() : das::Enumeration("curl_infotype") {
		external = true;
		cppName = "curl_infotype";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLINFO_TEXT", "CURLINFO_TEXT", int64_t(curl_infotype::CURLINFO_TEXT), das::LineInfo());
		addIEx("CURLINFO_HEADER_IN", "CURLINFO_HEADER_IN", int64_t(curl_infotype::CURLINFO_HEADER_IN), das::LineInfo());
		addIEx("CURLINFO_HEADER_OUT", "CURLINFO_HEADER_OUT", int64_t(curl_infotype::CURLINFO_HEADER_OUT), das::LineInfo());
		addIEx("CURLINFO_DATA_IN", "CURLINFO_DATA_IN", int64_t(curl_infotype::CURLINFO_DATA_IN), das::LineInfo());
		addIEx("CURLINFO_DATA_OUT", "CURLINFO_DATA_OUT", int64_t(curl_infotype::CURLINFO_DATA_OUT), das::LineInfo());
		addIEx("CURLINFO_SSL_DATA_IN", "CURLINFO_SSL_DATA_IN", int64_t(curl_infotype::CURLINFO_SSL_DATA_IN), das::LineInfo());
		addIEx("CURLINFO_SSL_DATA_OUT", "CURLINFO_SSL_DATA_OUT", int64_t(curl_infotype::CURLINFO_SSL_DATA_OUT), das::LineInfo());
		addIEx("CURLINFO_END", "CURLINFO_END", int64_t(curl_infotype::CURLINFO_END), das::LineInfo());
	}
};

class Enumeration_CURLcode : public das::Enumeration {
public:
	Enumeration_CURLcode() : das::Enumeration("CURLcode") {
		external = true;
		cppName = "CURLcode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLE_OK", "CURLE_OK", int64_t(CURLcode::CURLE_OK), das::LineInfo());
		addIEx("CURLE_UNSUPPORTED_PROTOCOL", "CURLE_UNSUPPORTED_PROTOCOL", int64_t(CURLcode::CURLE_UNSUPPORTED_PROTOCOL), das::LineInfo());
		addIEx("CURLE_FAILED_INIT", "CURLE_FAILED_INIT", int64_t(CURLcode::CURLE_FAILED_INIT), das::LineInfo());
		addIEx("CURLE_URL_MALFORMAT", "CURLE_URL_MALFORMAT", int64_t(CURLcode::CURLE_URL_MALFORMAT), das::LineInfo());
		addIEx("CURLE_NOT_BUILT_IN", "CURLE_NOT_BUILT_IN", int64_t(CURLcode::CURLE_NOT_BUILT_IN), das::LineInfo());
		addIEx("CURLE_COULDNT_RESOLVE_PROXY", "CURLE_COULDNT_RESOLVE_PROXY", int64_t(CURLcode::CURLE_COULDNT_RESOLVE_PROXY), das::LineInfo());
		addIEx("CURLE_COULDNT_RESOLVE_HOST", "CURLE_COULDNT_RESOLVE_HOST", int64_t(CURLcode::CURLE_COULDNT_RESOLVE_HOST), das::LineInfo());
		addIEx("CURLE_COULDNT_CONNECT", "CURLE_COULDNT_CONNECT", int64_t(CURLcode::CURLE_COULDNT_CONNECT), das::LineInfo());
		addIEx("CURLE_WEIRD_SERVER_REPLY", "CURLE_WEIRD_SERVER_REPLY", int64_t(CURLcode::CURLE_WEIRD_SERVER_REPLY), das::LineInfo());
		addIEx("CURLE_REMOTE_ACCESS_DENIED", "CURLE_REMOTE_ACCESS_DENIED", int64_t(CURLcode::CURLE_REMOTE_ACCESS_DENIED), das::LineInfo());
		addIEx("CURLE_FTP_ACCEPT_FAILED", "CURLE_FTP_ACCEPT_FAILED", int64_t(CURLcode::CURLE_FTP_ACCEPT_FAILED), das::LineInfo());
		addIEx("CURLE_FTP_WEIRD_PASS_REPLY", "CURLE_FTP_WEIRD_PASS_REPLY", int64_t(CURLcode::CURLE_FTP_WEIRD_PASS_REPLY), das::LineInfo());
		addIEx("CURLE_FTP_ACCEPT_TIMEOUT", "CURLE_FTP_ACCEPT_TIMEOUT", int64_t(CURLcode::CURLE_FTP_ACCEPT_TIMEOUT), das::LineInfo());
		addIEx("CURLE_FTP_WEIRD_PASV_REPLY", "CURLE_FTP_WEIRD_PASV_REPLY", int64_t(CURLcode::CURLE_FTP_WEIRD_PASV_REPLY), das::LineInfo());
		addIEx("CURLE_FTP_WEIRD_227_FORMAT", "CURLE_FTP_WEIRD_227_FORMAT", int64_t(CURLcode::CURLE_FTP_WEIRD_227_FORMAT), das::LineInfo());
		addIEx("CURLE_FTP_CANT_GET_HOST", "CURLE_FTP_CANT_GET_HOST", int64_t(CURLcode::CURLE_FTP_CANT_GET_HOST), das::LineInfo());
		addIEx("CURLE_HTTP2", "CURLE_HTTP2", int64_t(CURLcode::CURLE_HTTP2), das::LineInfo());
		addIEx("CURLE_FTP_COULDNT_SET_TYPE", "CURLE_FTP_COULDNT_SET_TYPE", int64_t(CURLcode::CURLE_FTP_COULDNT_SET_TYPE), das::LineInfo());
		addIEx("CURLE_PARTIAL_FILE", "CURLE_PARTIAL_FILE", int64_t(CURLcode::CURLE_PARTIAL_FILE), das::LineInfo());
		addIEx("CURLE_FTP_COULDNT_RETR_FILE", "CURLE_FTP_COULDNT_RETR_FILE", int64_t(CURLcode::CURLE_FTP_COULDNT_RETR_FILE), das::LineInfo());
		addIEx("CURLE_OBSOLETE20", "CURLE_OBSOLETE20", int64_t(CURLcode::CURLE_OBSOLETE20), das::LineInfo());
		addIEx("CURLE_QUOTE_ERROR", "CURLE_QUOTE_ERROR", int64_t(CURLcode::CURLE_QUOTE_ERROR), das::LineInfo());
		addIEx("CURLE_HTTP_RETURNED_ERROR", "CURLE_HTTP_RETURNED_ERROR", int64_t(CURLcode::CURLE_HTTP_RETURNED_ERROR), das::LineInfo());
		addIEx("CURLE_WRITE_ERROR", "CURLE_WRITE_ERROR", int64_t(CURLcode::CURLE_WRITE_ERROR), das::LineInfo());
		addIEx("CURLE_OBSOLETE24", "CURLE_OBSOLETE24", int64_t(CURLcode::CURLE_OBSOLETE24), das::LineInfo());
		addIEx("CURLE_UPLOAD_FAILED", "CURLE_UPLOAD_FAILED", int64_t(CURLcode::CURLE_UPLOAD_FAILED), das::LineInfo());
		addIEx("CURLE_READ_ERROR", "CURLE_READ_ERROR", int64_t(CURLcode::CURLE_READ_ERROR), das::LineInfo());
		addIEx("CURLE_OUT_OF_MEMORY", "CURLE_OUT_OF_MEMORY", int64_t(CURLcode::CURLE_OUT_OF_MEMORY), das::LineInfo());
		addIEx("CURLE_OPERATION_TIMEDOUT", "CURLE_OPERATION_TIMEDOUT", int64_t(CURLcode::CURLE_OPERATION_TIMEDOUT), das::LineInfo());
		addIEx("CURLE_OBSOLETE29", "CURLE_OBSOLETE29", int64_t(CURLcode::CURLE_OBSOLETE29), das::LineInfo());
		addIEx("CURLE_FTP_PORT_FAILED", "CURLE_FTP_PORT_FAILED", int64_t(CURLcode::CURLE_FTP_PORT_FAILED), das::LineInfo());
		addIEx("CURLE_FTP_COULDNT_USE_REST", "CURLE_FTP_COULDNT_USE_REST", int64_t(CURLcode::CURLE_FTP_COULDNT_USE_REST), das::LineInfo());
		addIEx("CURLE_OBSOLETE32", "CURLE_OBSOLETE32", int64_t(CURLcode::CURLE_OBSOLETE32), das::LineInfo());
		addIEx("CURLE_RANGE_ERROR", "CURLE_RANGE_ERROR", int64_t(CURLcode::CURLE_RANGE_ERROR), das::LineInfo());
		addIEx("CURLE_HTTP_POST_ERROR", "CURLE_HTTP_POST_ERROR", int64_t(CURLcode::CURLE_HTTP_POST_ERROR), das::LineInfo());
		addIEx("CURLE_SSL_CONNECT_ERROR", "CURLE_SSL_CONNECT_ERROR", int64_t(CURLcode::CURLE_SSL_CONNECT_ERROR), das::LineInfo());
		addIEx("CURLE_BAD_DOWNLOAD_RESUME", "CURLE_BAD_DOWNLOAD_RESUME", int64_t(CURLcode::CURLE_BAD_DOWNLOAD_RESUME), das::LineInfo());
		addIEx("CURLE_FILE_COULDNT_READ_FILE", "CURLE_FILE_COULDNT_READ_FILE", int64_t(CURLcode::CURLE_FILE_COULDNT_READ_FILE), das::LineInfo());
		addIEx("CURLE_LDAP_CANNOT_BIND", "CURLE_LDAP_CANNOT_BIND", int64_t(CURLcode::CURLE_LDAP_CANNOT_BIND), das::LineInfo());
		addIEx("CURLE_LDAP_SEARCH_FAILED", "CURLE_LDAP_SEARCH_FAILED", int64_t(CURLcode::CURLE_LDAP_SEARCH_FAILED), das::LineInfo());
		addIEx("CURLE_OBSOLETE40", "CURLE_OBSOLETE40", int64_t(CURLcode::CURLE_OBSOLETE40), das::LineInfo());
		addIEx("CURLE_FUNCTION_NOT_FOUND", "CURLE_FUNCTION_NOT_FOUND", int64_t(CURLcode::CURLE_FUNCTION_NOT_FOUND), das::LineInfo());
		addIEx("CURLE_ABORTED_BY_CALLBACK", "CURLE_ABORTED_BY_CALLBACK", int64_t(CURLcode::CURLE_ABORTED_BY_CALLBACK), das::LineInfo());
		addIEx("CURLE_BAD_FUNCTION_ARGUMENT", "CURLE_BAD_FUNCTION_ARGUMENT", int64_t(CURLcode::CURLE_BAD_FUNCTION_ARGUMENT), das::LineInfo());
		addIEx("CURLE_OBSOLETE44", "CURLE_OBSOLETE44", int64_t(CURLcode::CURLE_OBSOLETE44), das::LineInfo());
		addIEx("CURLE_INTERFACE_FAILED", "CURLE_INTERFACE_FAILED", int64_t(CURLcode::CURLE_INTERFACE_FAILED), das::LineInfo());
		addIEx("CURLE_OBSOLETE46", "CURLE_OBSOLETE46", int64_t(CURLcode::CURLE_OBSOLETE46), das::LineInfo());
		addIEx("CURLE_TOO_MANY_REDIRECTS", "CURLE_TOO_MANY_REDIRECTS", int64_t(CURLcode::CURLE_TOO_MANY_REDIRECTS), das::LineInfo());
		addIEx("CURLE_UNKNOWN_OPTION", "CURLE_UNKNOWN_OPTION", int64_t(CURLcode::CURLE_UNKNOWN_OPTION), das::LineInfo());
		addIEx("CURLE_SETOPT_OPTION_SYNTAX", "CURLE_SETOPT_OPTION_SYNTAX", int64_t(CURLcode::CURLE_SETOPT_OPTION_SYNTAX), das::LineInfo());
		addIEx("CURLE_OBSOLETE50", "CURLE_OBSOLETE50", int64_t(CURLcode::CURLE_OBSOLETE50), das::LineInfo());
		addIEx("CURLE_OBSOLETE51", "CURLE_OBSOLETE51", int64_t(CURLcode::CURLE_OBSOLETE51), das::LineInfo());
		addIEx("CURLE_GOT_NOTHING", "CURLE_GOT_NOTHING", int64_t(CURLcode::CURLE_GOT_NOTHING), das::LineInfo());
		addIEx("CURLE_SSL_ENGINE_NOTFOUND", "CURLE_SSL_ENGINE_NOTFOUND", int64_t(CURLcode::CURLE_SSL_ENGINE_NOTFOUND), das::LineInfo());
		addIEx("CURLE_SSL_ENGINE_SETFAILED", "CURLE_SSL_ENGINE_SETFAILED", int64_t(CURLcode::CURLE_SSL_ENGINE_SETFAILED), das::LineInfo());
		addIEx("CURLE_SEND_ERROR", "CURLE_SEND_ERROR", int64_t(CURLcode::CURLE_SEND_ERROR), das::LineInfo());
		addIEx("CURLE_RECV_ERROR", "CURLE_RECV_ERROR", int64_t(CURLcode::CURLE_RECV_ERROR), das::LineInfo());
		addIEx("CURLE_OBSOLETE57", "CURLE_OBSOLETE57", int64_t(CURLcode::CURLE_OBSOLETE57), das::LineInfo());
		addIEx("CURLE_SSL_CERTPROBLEM", "CURLE_SSL_CERTPROBLEM", int64_t(CURLcode::CURLE_SSL_CERTPROBLEM), das::LineInfo());
		addIEx("CURLE_SSL_CIPHER", "CURLE_SSL_CIPHER", int64_t(CURLcode::CURLE_SSL_CIPHER), das::LineInfo());
		addIEx("CURLE_PEER_FAILED_VERIFICATION", "CURLE_PEER_FAILED_VERIFICATION", int64_t(CURLcode::CURLE_PEER_FAILED_VERIFICATION), das::LineInfo());
		addIEx("CURLE_BAD_CONTENT_ENCODING", "CURLE_BAD_CONTENT_ENCODING", int64_t(CURLcode::CURLE_BAD_CONTENT_ENCODING), das::LineInfo());
		addIEx("CURLE_OBSOLETE62", "CURLE_OBSOLETE62", int64_t(CURLcode::CURLE_OBSOLETE62), das::LineInfo());
		addIEx("CURLE_FILESIZE_EXCEEDED", "CURLE_FILESIZE_EXCEEDED", int64_t(CURLcode::CURLE_FILESIZE_EXCEEDED), das::LineInfo());
		addIEx("CURLE_USE_SSL_FAILED", "CURLE_USE_SSL_FAILED", int64_t(CURLcode::CURLE_USE_SSL_FAILED), das::LineInfo());
		addIEx("CURLE_SEND_FAIL_REWIND", "CURLE_SEND_FAIL_REWIND", int64_t(CURLcode::CURLE_SEND_FAIL_REWIND), das::LineInfo());
		addIEx("CURLE_SSL_ENGINE_INITFAILED", "CURLE_SSL_ENGINE_INITFAILED", int64_t(CURLcode::CURLE_SSL_ENGINE_INITFAILED), das::LineInfo());
		addIEx("CURLE_LOGIN_DENIED", "CURLE_LOGIN_DENIED", int64_t(CURLcode::CURLE_LOGIN_DENIED), das::LineInfo());
		addIEx("CURLE_TFTP_NOTFOUND", "CURLE_TFTP_NOTFOUND", int64_t(CURLcode::CURLE_TFTP_NOTFOUND), das::LineInfo());
		addIEx("CURLE_TFTP_PERM", "CURLE_TFTP_PERM", int64_t(CURLcode::CURLE_TFTP_PERM), das::LineInfo());
		addIEx("CURLE_REMOTE_DISK_FULL", "CURLE_REMOTE_DISK_FULL", int64_t(CURLcode::CURLE_REMOTE_DISK_FULL), das::LineInfo());
		addIEx("CURLE_TFTP_ILLEGAL", "CURLE_TFTP_ILLEGAL", int64_t(CURLcode::CURLE_TFTP_ILLEGAL), das::LineInfo());
		addIEx("CURLE_TFTP_UNKNOWNID", "CURLE_TFTP_UNKNOWNID", int64_t(CURLcode::CURLE_TFTP_UNKNOWNID), das::LineInfo());
		addIEx("CURLE_REMOTE_FILE_EXISTS", "CURLE_REMOTE_FILE_EXISTS", int64_t(CURLcode::CURLE_REMOTE_FILE_EXISTS), das::LineInfo());
		addIEx("CURLE_TFTP_NOSUCHUSER", "CURLE_TFTP_NOSUCHUSER", int64_t(CURLcode::CURLE_TFTP_NOSUCHUSER), das::LineInfo());
		addIEx("CURLE_CONV_FAILED", "CURLE_CONV_FAILED", int64_t(CURLcode::CURLE_CONV_FAILED), das::LineInfo());
		addIEx("CURLE_CONV_REQD", "CURLE_CONV_REQD", int64_t(CURLcode::CURLE_CONV_REQD), das::LineInfo());
		addIEx("CURLE_SSL_CACERT_BADFILE", "CURLE_SSL_CACERT_BADFILE", int64_t(CURLcode::CURLE_SSL_CACERT_BADFILE), das::LineInfo());
		addIEx("CURLE_REMOTE_FILE_NOT_FOUND", "CURLE_REMOTE_FILE_NOT_FOUND", int64_t(CURLcode::CURLE_REMOTE_FILE_NOT_FOUND), das::LineInfo());
		addIEx("CURLE_SSH", "CURLE_SSH", int64_t(CURLcode::CURLE_SSH), das::LineInfo());
		addIEx("CURLE_SSL_SHUTDOWN_FAILED", "CURLE_SSL_SHUTDOWN_FAILED", int64_t(CURLcode::CURLE_SSL_SHUTDOWN_FAILED), das::LineInfo());
		addIEx("CURLE_AGAIN", "CURLE_AGAIN", int64_t(CURLcode::CURLE_AGAIN), das::LineInfo());
		addIEx("CURLE_SSL_CRL_BADFILE", "CURLE_SSL_CRL_BADFILE", int64_t(CURLcode::CURLE_SSL_CRL_BADFILE), das::LineInfo());
		addIEx("CURLE_SSL_ISSUER_ERROR", "CURLE_SSL_ISSUER_ERROR", int64_t(CURLcode::CURLE_SSL_ISSUER_ERROR), das::LineInfo());
		addIEx("CURLE_FTP_PRET_FAILED", "CURLE_FTP_PRET_FAILED", int64_t(CURLcode::CURLE_FTP_PRET_FAILED), das::LineInfo());
		addIEx("CURLE_RTSP_CSEQ_ERROR", "CURLE_RTSP_CSEQ_ERROR", int64_t(CURLcode::CURLE_RTSP_CSEQ_ERROR), das::LineInfo());
		addIEx("CURLE_RTSP_SESSION_ERROR", "CURLE_RTSP_SESSION_ERROR", int64_t(CURLcode::CURLE_RTSP_SESSION_ERROR), das::LineInfo());
		addIEx("CURLE_FTP_BAD_FILE_LIST", "CURLE_FTP_BAD_FILE_LIST", int64_t(CURLcode::CURLE_FTP_BAD_FILE_LIST), das::LineInfo());
		addIEx("CURLE_CHUNK_FAILED", "CURLE_CHUNK_FAILED", int64_t(CURLcode::CURLE_CHUNK_FAILED), das::LineInfo());
		addIEx("CURLE_NO_CONNECTION_AVAILABLE", "CURLE_NO_CONNECTION_AVAILABLE", int64_t(CURLcode::CURLE_NO_CONNECTION_AVAILABLE), das::LineInfo());
		addIEx("CURLE_SSL_PINNEDPUBKEYNOTMATCH", "CURLE_SSL_PINNEDPUBKEYNOTMATCH", int64_t(CURLcode::CURLE_SSL_PINNEDPUBKEYNOTMATCH), das::LineInfo());
		addIEx("CURLE_SSL_INVALIDCERTSTATUS", "CURLE_SSL_INVALIDCERTSTATUS", int64_t(CURLcode::CURLE_SSL_INVALIDCERTSTATUS), das::LineInfo());
		addIEx("CURLE_HTTP2_STREAM", "CURLE_HTTP2_STREAM", int64_t(CURLcode::CURLE_HTTP2_STREAM), das::LineInfo());
		addIEx("CURLE_RECURSIVE_API_CALL", "CURLE_RECURSIVE_API_CALL", int64_t(CURLcode::CURLE_RECURSIVE_API_CALL), das::LineInfo());
		addIEx("CURLE_AUTH_ERROR", "CURLE_AUTH_ERROR", int64_t(CURLcode::CURLE_AUTH_ERROR), das::LineInfo());
		addIEx("CURLE_HTTP3", "CURLE_HTTP3", int64_t(CURLcode::CURLE_HTTP3), das::LineInfo());
		addIEx("CURLE_QUIC_CONNECT_ERROR", "CURLE_QUIC_CONNECT_ERROR", int64_t(CURLcode::CURLE_QUIC_CONNECT_ERROR), das::LineInfo());
		addIEx("CURLE_PROXY", "CURLE_PROXY", int64_t(CURLcode::CURLE_PROXY), das::LineInfo());
		addIEx("CURLE_SSL_CLIENTCERT", "CURLE_SSL_CLIENTCERT", int64_t(CURLcode::CURLE_SSL_CLIENTCERT), das::LineInfo());
		addIEx("CURL_LAST", "CURL_LAST", int64_t(CURLcode::CURL_LAST), das::LineInfo());
	}
};

class Enumeration_CURLproxycode : public das::Enumeration {
public:
	Enumeration_CURLproxycode() : das::Enumeration("CURLproxycode") {
		external = true;
		cppName = "CURLproxycode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLPX_OK", "CURLPX_OK", int64_t(CURLproxycode::CURLPX_OK), das::LineInfo());
		addIEx("CURLPX_BAD_ADDRESS_TYPE", "CURLPX_BAD_ADDRESS_TYPE", int64_t(CURLproxycode::CURLPX_BAD_ADDRESS_TYPE), das::LineInfo());
		addIEx("CURLPX_BAD_VERSION", "CURLPX_BAD_VERSION", int64_t(CURLproxycode::CURLPX_BAD_VERSION), das::LineInfo());
		addIEx("CURLPX_CLOSED", "CURLPX_CLOSED", int64_t(CURLproxycode::CURLPX_CLOSED), das::LineInfo());
		addIEx("CURLPX_GSSAPI", "CURLPX_GSSAPI", int64_t(CURLproxycode::CURLPX_GSSAPI), das::LineInfo());
		addIEx("CURLPX_GSSAPI_PERMSG", "CURLPX_GSSAPI_PERMSG", int64_t(CURLproxycode::CURLPX_GSSAPI_PERMSG), das::LineInfo());
		addIEx("CURLPX_GSSAPI_PROTECTION", "CURLPX_GSSAPI_PROTECTION", int64_t(CURLproxycode::CURLPX_GSSAPI_PROTECTION), das::LineInfo());
		addIEx("CURLPX_IDENTD", "CURLPX_IDENTD", int64_t(CURLproxycode::CURLPX_IDENTD), das::LineInfo());
		addIEx("CURLPX_IDENTD_DIFFER", "CURLPX_IDENTD_DIFFER", int64_t(CURLproxycode::CURLPX_IDENTD_DIFFER), das::LineInfo());
		addIEx("CURLPX_LONG_HOSTNAME", "CURLPX_LONG_HOSTNAME", int64_t(CURLproxycode::CURLPX_LONG_HOSTNAME), das::LineInfo());
		addIEx("CURLPX_LONG_PASSWD", "CURLPX_LONG_PASSWD", int64_t(CURLproxycode::CURLPX_LONG_PASSWD), das::LineInfo());
		addIEx("CURLPX_LONG_USER", "CURLPX_LONG_USER", int64_t(CURLproxycode::CURLPX_LONG_USER), das::LineInfo());
		addIEx("CURLPX_NO_AUTH", "CURLPX_NO_AUTH", int64_t(CURLproxycode::CURLPX_NO_AUTH), das::LineInfo());
		addIEx("CURLPX_RECV_ADDRESS", "CURLPX_RECV_ADDRESS", int64_t(CURLproxycode::CURLPX_RECV_ADDRESS), das::LineInfo());
		addIEx("CURLPX_RECV_AUTH", "CURLPX_RECV_AUTH", int64_t(CURLproxycode::CURLPX_RECV_AUTH), das::LineInfo());
		addIEx("CURLPX_RECV_CONNECT", "CURLPX_RECV_CONNECT", int64_t(CURLproxycode::CURLPX_RECV_CONNECT), das::LineInfo());
		addIEx("CURLPX_RECV_REQACK", "CURLPX_RECV_REQACK", int64_t(CURLproxycode::CURLPX_RECV_REQACK), das::LineInfo());
		addIEx("CURLPX_REPLY_ADDRESS_TYPE_NOT_SUPPORTED", "CURLPX_REPLY_ADDRESS_TYPE_NOT_SUPPORTED", int64_t(CURLproxycode::CURLPX_REPLY_ADDRESS_TYPE_NOT_SUPPORTED), das::LineInfo());
		addIEx("CURLPX_REPLY_COMMAND_NOT_SUPPORTED", "CURLPX_REPLY_COMMAND_NOT_SUPPORTED", int64_t(CURLproxycode::CURLPX_REPLY_COMMAND_NOT_SUPPORTED), das::LineInfo());
		addIEx("CURLPX_REPLY_CONNECTION_REFUSED", "CURLPX_REPLY_CONNECTION_REFUSED", int64_t(CURLproxycode::CURLPX_REPLY_CONNECTION_REFUSED), das::LineInfo());
		addIEx("CURLPX_REPLY_GENERAL_SERVER_FAILURE", "CURLPX_REPLY_GENERAL_SERVER_FAILURE", int64_t(CURLproxycode::CURLPX_REPLY_GENERAL_SERVER_FAILURE), das::LineInfo());
		addIEx("CURLPX_REPLY_HOST_UNREACHABLE", "CURLPX_REPLY_HOST_UNREACHABLE", int64_t(CURLproxycode::CURLPX_REPLY_HOST_UNREACHABLE), das::LineInfo());
		addIEx("CURLPX_REPLY_NETWORK_UNREACHABLE", "CURLPX_REPLY_NETWORK_UNREACHABLE", int64_t(CURLproxycode::CURLPX_REPLY_NETWORK_UNREACHABLE), das::LineInfo());
		addIEx("CURLPX_REPLY_NOT_ALLOWED", "CURLPX_REPLY_NOT_ALLOWED", int64_t(CURLproxycode::CURLPX_REPLY_NOT_ALLOWED), das::LineInfo());
		addIEx("CURLPX_REPLY_TTL_EXPIRED", "CURLPX_REPLY_TTL_EXPIRED", int64_t(CURLproxycode::CURLPX_REPLY_TTL_EXPIRED), das::LineInfo());
		addIEx("CURLPX_REPLY_UNASSIGNED", "CURLPX_REPLY_UNASSIGNED", int64_t(CURLproxycode::CURLPX_REPLY_UNASSIGNED), das::LineInfo());
		addIEx("CURLPX_REQUEST_FAILED", "CURLPX_REQUEST_FAILED", int64_t(CURLproxycode::CURLPX_REQUEST_FAILED), das::LineInfo());
		addIEx("CURLPX_RESOLVE_HOST", "CURLPX_RESOLVE_HOST", int64_t(CURLproxycode::CURLPX_RESOLVE_HOST), das::LineInfo());
		addIEx("CURLPX_SEND_AUTH", "CURLPX_SEND_AUTH", int64_t(CURLproxycode::CURLPX_SEND_AUTH), das::LineInfo());
		addIEx("CURLPX_SEND_CONNECT", "CURLPX_SEND_CONNECT", int64_t(CURLproxycode::CURLPX_SEND_CONNECT), das::LineInfo());
		addIEx("CURLPX_SEND_REQUEST", "CURLPX_SEND_REQUEST", int64_t(CURLproxycode::CURLPX_SEND_REQUEST), das::LineInfo());
		addIEx("CURLPX_UNKNOWN_FAIL", "CURLPX_UNKNOWN_FAIL", int64_t(CURLproxycode::CURLPX_UNKNOWN_FAIL), das::LineInfo());
		addIEx("CURLPX_UNKNOWN_MODE", "CURLPX_UNKNOWN_MODE", int64_t(CURLproxycode::CURLPX_UNKNOWN_MODE), das::LineInfo());
		addIEx("CURLPX_USER_REJECTED", "CURLPX_USER_REJECTED", int64_t(CURLproxycode::CURLPX_USER_REJECTED), das::LineInfo());
		addIEx("CURLPX_LAST", "CURLPX_LAST", int64_t(CURLproxycode::CURLPX_LAST), das::LineInfo());
	}
};

class Enumeration_curl_proxytype : public das::Enumeration {
public:
	Enumeration_curl_proxytype() : das::Enumeration("curl_proxytype") {
		external = true;
		cppName = "curl_proxytype";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLPROXY_HTTP", "CURLPROXY_HTTP", int64_t(curl_proxytype::CURLPROXY_HTTP), das::LineInfo());
		addIEx("CURLPROXY_HTTP_1_0", "CURLPROXY_HTTP_1_0", int64_t(curl_proxytype::CURLPROXY_HTTP_1_0), das::LineInfo());
		addIEx("CURLPROXY_HTTPS", "CURLPROXY_HTTPS", int64_t(curl_proxytype::CURLPROXY_HTTPS), das::LineInfo());
		addIEx("CURLPROXY_SOCKS4", "CURLPROXY_SOCKS4", int64_t(curl_proxytype::CURLPROXY_SOCKS4), das::LineInfo());
		addIEx("CURLPROXY_SOCKS5", "CURLPROXY_SOCKS5", int64_t(curl_proxytype::CURLPROXY_SOCKS5), das::LineInfo());
		addIEx("CURLPROXY_SOCKS4A", "CURLPROXY_SOCKS4A", int64_t(curl_proxytype::CURLPROXY_SOCKS4A), das::LineInfo());
		addIEx("CURLPROXY_SOCKS5_HOSTNAME", "CURLPROXY_SOCKS5_HOSTNAME", int64_t(curl_proxytype::CURLPROXY_SOCKS5_HOSTNAME), das::LineInfo());
	}
};

class Enumeration_curl_khtype : public das::Enumeration {
public:
	Enumeration_curl_khtype() : das::Enumeration("curl_khtype") {
		external = true;
		cppName = "curl_khtype";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLKHTYPE_UNKNOWN", "CURLKHTYPE_UNKNOWN", int64_t(curl_khtype::CURLKHTYPE_UNKNOWN), das::LineInfo());
		addIEx("CURLKHTYPE_RSA1", "CURLKHTYPE_RSA1", int64_t(curl_khtype::CURLKHTYPE_RSA1), das::LineInfo());
		addIEx("CURLKHTYPE_RSA", "CURLKHTYPE_RSA", int64_t(curl_khtype::CURLKHTYPE_RSA), das::LineInfo());
		addIEx("CURLKHTYPE_DSS", "CURLKHTYPE_DSS", int64_t(curl_khtype::CURLKHTYPE_DSS), das::LineInfo());
		addIEx("CURLKHTYPE_ECDSA", "CURLKHTYPE_ECDSA", int64_t(curl_khtype::CURLKHTYPE_ECDSA), das::LineInfo());
		addIEx("CURLKHTYPE_ED25519", "CURLKHTYPE_ED25519", int64_t(curl_khtype::CURLKHTYPE_ED25519), das::LineInfo());
	}
};

class Enumeration_curl_khstat : public das::Enumeration {
public:
	Enumeration_curl_khstat() : das::Enumeration("curl_khstat") {
		external = true;
		cppName = "curl_khstat";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLKHSTAT_FINE_ADD_TO_FILE", "CURLKHSTAT_FINE_ADD_TO_FILE", int64_t(curl_khstat::CURLKHSTAT_FINE_ADD_TO_FILE), das::LineInfo());
		addIEx("CURLKHSTAT_FINE", "CURLKHSTAT_FINE", int64_t(curl_khstat::CURLKHSTAT_FINE), das::LineInfo());
		addIEx("CURLKHSTAT_REJECT", "CURLKHSTAT_REJECT", int64_t(curl_khstat::CURLKHSTAT_REJECT), das::LineInfo());
		addIEx("CURLKHSTAT_DEFER", "CURLKHSTAT_DEFER", int64_t(curl_khstat::CURLKHSTAT_DEFER), das::LineInfo());
		addIEx("CURLKHSTAT_FINE_REPLACE", "CURLKHSTAT_FINE_REPLACE", int64_t(curl_khstat::CURLKHSTAT_FINE_REPLACE), das::LineInfo());
		addIEx("CURLKHSTAT_LAST", "CURLKHSTAT_LAST", int64_t(curl_khstat::CURLKHSTAT_LAST), das::LineInfo());
	}
};

class Enumeration_curl_khmatch : public das::Enumeration {
public:
	Enumeration_curl_khmatch() : das::Enumeration("curl_khmatch") {
		external = true;
		cppName = "curl_khmatch";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLKHMATCH_OK", "CURLKHMATCH_OK", int64_t(curl_khmatch::CURLKHMATCH_OK), das::LineInfo());
		addIEx("CURLKHMATCH_MISMATCH", "CURLKHMATCH_MISMATCH", int64_t(curl_khmatch::CURLKHMATCH_MISMATCH), das::LineInfo());
		addIEx("CURLKHMATCH_MISSING", "CURLKHMATCH_MISSING", int64_t(curl_khmatch::CURLKHMATCH_MISSING), das::LineInfo());
		addIEx("CURLKHMATCH_LAST", "CURLKHMATCH_LAST", int64_t(curl_khmatch::CURLKHMATCH_LAST), das::LineInfo());
	}
};

class Enumeration_curl_usessl : public das::Enumeration {
public:
	Enumeration_curl_usessl() : das::Enumeration("curl_usessl") {
		external = true;
		cppName = "curl_usessl";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLUSESSL_NONE", "CURLUSESSL_NONE", int64_t(curl_usessl::CURLUSESSL_NONE), das::LineInfo());
		addIEx("CURLUSESSL_TRY", "CURLUSESSL_TRY", int64_t(curl_usessl::CURLUSESSL_TRY), das::LineInfo());
		addIEx("CURLUSESSL_CONTROL", "CURLUSESSL_CONTROL", int64_t(curl_usessl::CURLUSESSL_CONTROL), das::LineInfo());
		addIEx("CURLUSESSL_ALL", "CURLUSESSL_ALL", int64_t(curl_usessl::CURLUSESSL_ALL), das::LineInfo());
		addIEx("CURLUSESSL_LAST", "CURLUSESSL_LAST", int64_t(curl_usessl::CURLUSESSL_LAST), das::LineInfo());
	}
};

class Enumeration_curl_ftpccc : public das::Enumeration {
public:
	Enumeration_curl_ftpccc() : das::Enumeration("curl_ftpccc") {
		external = true;
		cppName = "curl_ftpccc";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLFTPSSL_CCC_NONE", "CURLFTPSSL_CCC_NONE", int64_t(curl_ftpccc::CURLFTPSSL_CCC_NONE), das::LineInfo());
		addIEx("CURLFTPSSL_CCC_PASSIVE", "CURLFTPSSL_CCC_PASSIVE", int64_t(curl_ftpccc::CURLFTPSSL_CCC_PASSIVE), das::LineInfo());
		addIEx("CURLFTPSSL_CCC_ACTIVE", "CURLFTPSSL_CCC_ACTIVE", int64_t(curl_ftpccc::CURLFTPSSL_CCC_ACTIVE), das::LineInfo());
		addIEx("CURLFTPSSL_CCC_LAST", "CURLFTPSSL_CCC_LAST", int64_t(curl_ftpccc::CURLFTPSSL_CCC_LAST), das::LineInfo());
	}
};

class Enumeration_curl_ftpauth : public das::Enumeration {
public:
	Enumeration_curl_ftpauth() : das::Enumeration("curl_ftpauth") {
		external = true;
		cppName = "curl_ftpauth";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLFTPAUTH_DEFAULT", "CURLFTPAUTH_DEFAULT", int64_t(curl_ftpauth::CURLFTPAUTH_DEFAULT), das::LineInfo());
		addIEx("CURLFTPAUTH_SSL", "CURLFTPAUTH_SSL", int64_t(curl_ftpauth::CURLFTPAUTH_SSL), das::LineInfo());
		addIEx("CURLFTPAUTH_TLS", "CURLFTPAUTH_TLS", int64_t(curl_ftpauth::CURLFTPAUTH_TLS), das::LineInfo());
		addIEx("CURLFTPAUTH_LAST", "CURLFTPAUTH_LAST", int64_t(curl_ftpauth::CURLFTPAUTH_LAST), das::LineInfo());
	}
};

class Enumeration_curl_ftpcreatedir : public das::Enumeration {
public:
	Enumeration_curl_ftpcreatedir() : das::Enumeration("curl_ftpcreatedir") {
		external = true;
		cppName = "curl_ftpcreatedir";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLFTP_CREATE_DIR_NONE", "CURLFTP_CREATE_DIR_NONE", int64_t(curl_ftpcreatedir::CURLFTP_CREATE_DIR_NONE), das::LineInfo());
		addIEx("CURLFTP_CREATE_DIR", "CURLFTP_CREATE_DIR", int64_t(curl_ftpcreatedir::CURLFTP_CREATE_DIR), das::LineInfo());
		addIEx("CURLFTP_CREATE_DIR_RETRY", "CURLFTP_CREATE_DIR_RETRY", int64_t(curl_ftpcreatedir::CURLFTP_CREATE_DIR_RETRY), das::LineInfo());
		addIEx("CURLFTP_CREATE_DIR_LAST", "CURLFTP_CREATE_DIR_LAST", int64_t(curl_ftpcreatedir::CURLFTP_CREATE_DIR_LAST), das::LineInfo());
	}
};

class Enumeration_curl_ftpmethod : public das::Enumeration {
public:
	Enumeration_curl_ftpmethod() : das::Enumeration("curl_ftpmethod") {
		external = true;
		cppName = "curl_ftpmethod";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLFTPMETHOD_DEFAULT", "CURLFTPMETHOD_DEFAULT", int64_t(curl_ftpmethod::CURLFTPMETHOD_DEFAULT), das::LineInfo());
		addIEx("CURLFTPMETHOD_MULTICWD", "CURLFTPMETHOD_MULTICWD", int64_t(curl_ftpmethod::CURLFTPMETHOD_MULTICWD), das::LineInfo());
		addIEx("CURLFTPMETHOD_NOCWD", "CURLFTPMETHOD_NOCWD", int64_t(curl_ftpmethod::CURLFTPMETHOD_NOCWD), das::LineInfo());
		addIEx("CURLFTPMETHOD_SINGLECWD", "CURLFTPMETHOD_SINGLECWD", int64_t(curl_ftpmethod::CURLFTPMETHOD_SINGLECWD), das::LineInfo());
		addIEx("CURLFTPMETHOD_LAST", "CURLFTPMETHOD_LAST", int64_t(curl_ftpmethod::CURLFTPMETHOD_LAST), das::LineInfo());
	}
};

class Enumeration_CURLSTScode : public das::Enumeration {
public:
	Enumeration_CURLSTScode() : das::Enumeration("CURLSTScode") {
		external = true;
		cppName = "CURLSTScode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLSTS_OK", "CURLSTS_OK", int64_t(CURLSTScode::CURLSTS_OK), das::LineInfo());
		addIEx("CURLSTS_DONE", "CURLSTS_DONE", int64_t(CURLSTScode::CURLSTS_DONE), das::LineInfo());
		addIEx("CURLSTS_FAIL", "CURLSTS_FAIL", int64_t(CURLSTScode::CURLSTS_FAIL), das::LineInfo());
	}
};

class Enumeration_CURLoption : public das::Enumeration {
public:
	Enumeration_CURLoption() : das::Enumeration("CURLoption") {
		external = true;
		cppName = "CURLoption";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLOPT_WRITEDATA", "CURLOPT_WRITEDATA", int64_t(CURLoption::CURLOPT_WRITEDATA), das::LineInfo());
		addIEx("CURLOPT_URL", "CURLOPT_URL", int64_t(CURLoption::CURLOPT_URL), das::LineInfo());
		addIEx("CURLOPT_PORT", "CURLOPT_PORT", int64_t(CURLoption::CURLOPT_PORT), das::LineInfo());
		addIEx("CURLOPT_PROXY", "CURLOPT_PROXY", int64_t(CURLoption::CURLOPT_PROXY), das::LineInfo());
		addIEx("CURLOPT_USERPWD", "CURLOPT_USERPWD", int64_t(CURLoption::CURLOPT_USERPWD), das::LineInfo());
		addIEx("CURLOPT_PROXYUSERPWD", "CURLOPT_PROXYUSERPWD", int64_t(CURLoption::CURLOPT_PROXYUSERPWD), das::LineInfo());
		addIEx("CURLOPT_RANGE", "CURLOPT_RANGE", int64_t(CURLoption::CURLOPT_RANGE), das::LineInfo());
		addIEx("CURLOPT_READDATA", "CURLOPT_READDATA", int64_t(CURLoption::CURLOPT_READDATA), das::LineInfo());
		addIEx("CURLOPT_ERRORBUFFER", "CURLOPT_ERRORBUFFER", int64_t(CURLoption::CURLOPT_ERRORBUFFER), das::LineInfo());
		addIEx("CURLOPT_WRITEFUNCTION", "CURLOPT_WRITEFUNCTION", int64_t(CURLoption::CURLOPT_WRITEFUNCTION), das::LineInfo());
		addIEx("CURLOPT_READFUNCTION", "CURLOPT_READFUNCTION", int64_t(CURLoption::CURLOPT_READFUNCTION), das::LineInfo());
		addIEx("CURLOPT_TIMEOUT", "CURLOPT_TIMEOUT", int64_t(CURLoption::CURLOPT_TIMEOUT), das::LineInfo());
		addIEx("CURLOPT_INFILESIZE", "CURLOPT_INFILESIZE", int64_t(CURLoption::CURLOPT_INFILESIZE), das::LineInfo());
		addIEx("CURLOPT_POSTFIELDS", "CURLOPT_POSTFIELDS", int64_t(CURLoption::CURLOPT_POSTFIELDS), das::LineInfo());
		addIEx("CURLOPT_REFERER", "CURLOPT_REFERER", int64_t(CURLoption::CURLOPT_REFERER), das::LineInfo());
		addIEx("CURLOPT_FTPPORT", "CURLOPT_FTPPORT", int64_t(CURLoption::CURLOPT_FTPPORT), das::LineInfo());
		addIEx("CURLOPT_USERAGENT", "CURLOPT_USERAGENT", int64_t(CURLoption::CURLOPT_USERAGENT), das::LineInfo());
		addIEx("CURLOPT_LOW_SPEED_LIMIT", "CURLOPT_LOW_SPEED_LIMIT", int64_t(CURLoption::CURLOPT_LOW_SPEED_LIMIT), das::LineInfo());
		addIEx("CURLOPT_LOW_SPEED_TIME", "CURLOPT_LOW_SPEED_TIME", int64_t(CURLoption::CURLOPT_LOW_SPEED_TIME), das::LineInfo());
		addIEx("CURLOPT_RESUME_FROM", "CURLOPT_RESUME_FROM", int64_t(CURLoption::CURLOPT_RESUME_FROM), das::LineInfo());
		addIEx("CURLOPT_COOKIE", "CURLOPT_COOKIE", int64_t(CURLoption::CURLOPT_COOKIE), das::LineInfo());
		addIEx("CURLOPT_HTTPHEADER", "CURLOPT_HTTPHEADER", int64_t(CURLoption::CURLOPT_HTTPHEADER), das::LineInfo());
		addIEx("CURLOPT_HTTPPOST", "CURLOPT_HTTPPOST", int64_t(CURLoption::CURLOPT_HTTPPOST), das::LineInfo());
		addIEx("CURLOPT_SSLCERT", "CURLOPT_SSLCERT", int64_t(CURLoption::CURLOPT_SSLCERT), das::LineInfo());
		addIEx("CURLOPT_KEYPASSWD", "CURLOPT_KEYPASSWD", int64_t(CURLoption::CURLOPT_KEYPASSWD), das::LineInfo());
		addIEx("CURLOPT_CRLF", "CURLOPT_CRLF", int64_t(CURLoption::CURLOPT_CRLF), das::LineInfo());
		addIEx("CURLOPT_QUOTE", "CURLOPT_QUOTE", int64_t(CURLoption::CURLOPT_QUOTE), das::LineInfo());
		addIEx("CURLOPT_HEADERDATA", "CURLOPT_HEADERDATA", int64_t(CURLoption::CURLOPT_HEADERDATA), das::LineInfo());
		addIEx("CURLOPT_COOKIEFILE", "CURLOPT_COOKIEFILE", int64_t(CURLoption::CURLOPT_COOKIEFILE), das::LineInfo());
		addIEx("CURLOPT_SSLVERSION", "CURLOPT_SSLVERSION", int64_t(CURLoption::CURLOPT_SSLVERSION), das::LineInfo());
		addIEx("CURLOPT_TIMECONDITION", "CURLOPT_TIMECONDITION", int64_t(CURLoption::CURLOPT_TIMECONDITION), das::LineInfo());
		addIEx("CURLOPT_TIMEVALUE", "CURLOPT_TIMEVALUE", int64_t(CURLoption::CURLOPT_TIMEVALUE), das::LineInfo());
		addIEx("CURLOPT_CUSTOMREQUEST", "CURLOPT_CUSTOMREQUEST", int64_t(CURLoption::CURLOPT_CUSTOMREQUEST), das::LineInfo());
		addIEx("CURLOPT_STDERR", "CURLOPT_STDERR", int64_t(CURLoption::CURLOPT_STDERR), das::LineInfo());
		addIEx("CURLOPT_POSTQUOTE", "CURLOPT_POSTQUOTE", int64_t(CURLoption::CURLOPT_POSTQUOTE), das::LineInfo());
		addIEx("CURLOPT_OBSOLETE40", "CURLOPT_OBSOLETE40", int64_t(CURLoption::CURLOPT_OBSOLETE40), das::LineInfo());
		addIEx("CURLOPT_VERBOSE", "CURLOPT_VERBOSE", int64_t(CURLoption::CURLOPT_VERBOSE), das::LineInfo());
		addIEx("CURLOPT_HEADER", "CURLOPT_HEADER", int64_t(CURLoption::CURLOPT_HEADER), das::LineInfo());
		addIEx("CURLOPT_NOPROGRESS", "CURLOPT_NOPROGRESS", int64_t(CURLoption::CURLOPT_NOPROGRESS), das::LineInfo());
		addIEx("CURLOPT_NOBODY", "CURLOPT_NOBODY", int64_t(CURLoption::CURLOPT_NOBODY), das::LineInfo());
		addIEx("CURLOPT_FAILONERROR", "CURLOPT_FAILONERROR", int64_t(CURLoption::CURLOPT_FAILONERROR), das::LineInfo());
		addIEx("CURLOPT_UPLOAD", "CURLOPT_UPLOAD", int64_t(CURLoption::CURLOPT_UPLOAD), das::LineInfo());
		addIEx("CURLOPT_POST", "CURLOPT_POST", int64_t(CURLoption::CURLOPT_POST), das::LineInfo());
		addIEx("CURLOPT_DIRLISTONLY", "CURLOPT_DIRLISTONLY", int64_t(CURLoption::CURLOPT_DIRLISTONLY), das::LineInfo());
		addIEx("CURLOPT_APPEND", "CURLOPT_APPEND", int64_t(CURLoption::CURLOPT_APPEND), das::LineInfo());
		addIEx("CURLOPT_NETRC", "CURLOPT_NETRC", int64_t(CURLoption::CURLOPT_NETRC), das::LineInfo());
		addIEx("CURLOPT_FOLLOWLOCATION", "CURLOPT_FOLLOWLOCATION", int64_t(CURLoption::CURLOPT_FOLLOWLOCATION), das::LineInfo());
		addIEx("CURLOPT_TRANSFERTEXT", "CURLOPT_TRANSFERTEXT", int64_t(CURLoption::CURLOPT_TRANSFERTEXT), das::LineInfo());
		addIEx("CURLOPT_PUT", "CURLOPT_PUT", int64_t(CURLoption::CURLOPT_PUT), das::LineInfo());
		addIEx("CURLOPT_PROGRESSFUNCTION", "CURLOPT_PROGRESSFUNCTION", int64_t(CURLoption::CURLOPT_PROGRESSFUNCTION), das::LineInfo());
		addIEx("CURLOPT_XFERINFODATA", "CURLOPT_XFERINFODATA", int64_t(CURLoption::CURLOPT_XFERINFODATA), das::LineInfo());
		addIEx("CURLOPT_AUTOREFERER", "CURLOPT_AUTOREFERER", int64_t(CURLoption::CURLOPT_AUTOREFERER), das::LineInfo());
		addIEx("CURLOPT_PROXYPORT", "CURLOPT_PROXYPORT", int64_t(CURLoption::CURLOPT_PROXYPORT), das::LineInfo());
		addIEx("CURLOPT_POSTFIELDSIZE", "CURLOPT_POSTFIELDSIZE", int64_t(CURLoption::CURLOPT_POSTFIELDSIZE), das::LineInfo());
		addIEx("CURLOPT_HTTPPROXYTUNNEL", "CURLOPT_HTTPPROXYTUNNEL", int64_t(CURLoption::CURLOPT_HTTPPROXYTUNNEL), das::LineInfo());
		addIEx("CURLOPT_INTERFACE", "CURLOPT_INTERFACE", int64_t(CURLoption::CURLOPT_INTERFACE), das::LineInfo());
		addIEx("CURLOPT_KRBLEVEL", "CURLOPT_KRBLEVEL", int64_t(CURLoption::CURLOPT_KRBLEVEL), das::LineInfo());
		addIEx("CURLOPT_SSL_VERIFYPEER", "CURLOPT_SSL_VERIFYPEER", int64_t(CURLoption::CURLOPT_SSL_VERIFYPEER), das::LineInfo());
		addIEx("CURLOPT_CAINFO", "CURLOPT_CAINFO", int64_t(CURLoption::CURLOPT_CAINFO), das::LineInfo());
		addIEx("CURLOPT_MAXREDIRS", "CURLOPT_MAXREDIRS", int64_t(CURLoption::CURLOPT_MAXREDIRS), das::LineInfo());
		addIEx("CURLOPT_FILETIME", "CURLOPT_FILETIME", int64_t(CURLoption::CURLOPT_FILETIME), das::LineInfo());
		addIEx("CURLOPT_TELNETOPTIONS", "CURLOPT_TELNETOPTIONS", int64_t(CURLoption::CURLOPT_TELNETOPTIONS), das::LineInfo());
		addIEx("CURLOPT_MAXCONNECTS", "CURLOPT_MAXCONNECTS", int64_t(CURLoption::CURLOPT_MAXCONNECTS), das::LineInfo());
		addIEx("CURLOPT_OBSOLETE72", "CURLOPT_OBSOLETE72", int64_t(CURLoption::CURLOPT_OBSOLETE72), das::LineInfo());
		addIEx("CURLOPT_FRESH_CONNECT", "CURLOPT_FRESH_CONNECT", int64_t(CURLoption::CURLOPT_FRESH_CONNECT), das::LineInfo());
		addIEx("CURLOPT_FORBID_REUSE", "CURLOPT_FORBID_REUSE", int64_t(CURLoption::CURLOPT_FORBID_REUSE), das::LineInfo());
		addIEx("CURLOPT_RANDOM_FILE", "CURLOPT_RANDOM_FILE", int64_t(CURLoption::CURLOPT_RANDOM_FILE), das::LineInfo());
		addIEx("CURLOPT_EGDSOCKET", "CURLOPT_EGDSOCKET", int64_t(CURLoption::CURLOPT_EGDSOCKET), das::LineInfo());
		addIEx("CURLOPT_CONNECTTIMEOUT", "CURLOPT_CONNECTTIMEOUT", int64_t(CURLoption::CURLOPT_CONNECTTIMEOUT), das::LineInfo());
		addIEx("CURLOPT_HEADERFUNCTION", "CURLOPT_HEADERFUNCTION", int64_t(CURLoption::CURLOPT_HEADERFUNCTION), das::LineInfo());
		addIEx("CURLOPT_HTTPGET", "CURLOPT_HTTPGET", int64_t(CURLoption::CURLOPT_HTTPGET), das::LineInfo());
		addIEx("CURLOPT_SSL_VERIFYHOST", "CURLOPT_SSL_VERIFYHOST", int64_t(CURLoption::CURLOPT_SSL_VERIFYHOST), das::LineInfo());
		addIEx("CURLOPT_COOKIEJAR", "CURLOPT_COOKIEJAR", int64_t(CURLoption::CURLOPT_COOKIEJAR), das::LineInfo());
		addIEx("CURLOPT_SSL_CIPHER_LIST", "CURLOPT_SSL_CIPHER_LIST", int64_t(CURLoption::CURLOPT_SSL_CIPHER_LIST), das::LineInfo());
		addIEx("CURLOPT_HTTP_VERSION", "CURLOPT_HTTP_VERSION", int64_t(CURLoption::CURLOPT_HTTP_VERSION), das::LineInfo());
		addIEx("CURLOPT_FTP_USE_EPSV", "CURLOPT_FTP_USE_EPSV", int64_t(CURLoption::CURLOPT_FTP_USE_EPSV), das::LineInfo());
		addIEx("CURLOPT_SSLCERTTYPE", "CURLOPT_SSLCERTTYPE", int64_t(CURLoption::CURLOPT_SSLCERTTYPE), das::LineInfo());
		addIEx("CURLOPT_SSLKEY", "CURLOPT_SSLKEY", int64_t(CURLoption::CURLOPT_SSLKEY), das::LineInfo());
		addIEx("CURLOPT_SSLKEYTYPE", "CURLOPT_SSLKEYTYPE", int64_t(CURLoption::CURLOPT_SSLKEYTYPE), das::LineInfo());
		addIEx("CURLOPT_SSLENGINE", "CURLOPT_SSLENGINE", int64_t(CURLoption::CURLOPT_SSLENGINE), das::LineInfo());
		addIEx("CURLOPT_SSLENGINE_DEFAULT", "CURLOPT_SSLENGINE_DEFAULT", int64_t(CURLoption::CURLOPT_SSLENGINE_DEFAULT), das::LineInfo());
		addIEx("CURLOPT_DNS_USE_GLOBAL_CACHE", "CURLOPT_DNS_USE_GLOBAL_CACHE", int64_t(CURLoption::CURLOPT_DNS_USE_GLOBAL_CACHE), das::LineInfo());
		addIEx("CURLOPT_DNS_CACHE_TIMEOUT", "CURLOPT_DNS_CACHE_TIMEOUT", int64_t(CURLoption::CURLOPT_DNS_CACHE_TIMEOUT), das::LineInfo());
		addIEx("CURLOPT_PREQUOTE", "CURLOPT_PREQUOTE", int64_t(CURLoption::CURLOPT_PREQUOTE), das::LineInfo());
		addIEx("CURLOPT_DEBUGFUNCTION", "CURLOPT_DEBUGFUNCTION", int64_t(CURLoption::CURLOPT_DEBUGFUNCTION), das::LineInfo());
		addIEx("CURLOPT_DEBUGDATA", "CURLOPT_DEBUGDATA", int64_t(CURLoption::CURLOPT_DEBUGDATA), das::LineInfo());
		addIEx("CURLOPT_COOKIESESSION", "CURLOPT_COOKIESESSION", int64_t(CURLoption::CURLOPT_COOKIESESSION), das::LineInfo());
		addIEx("CURLOPT_CAPATH", "CURLOPT_CAPATH", int64_t(CURLoption::CURLOPT_CAPATH), das::LineInfo());
		addIEx("CURLOPT_BUFFERSIZE", "CURLOPT_BUFFERSIZE", int64_t(CURLoption::CURLOPT_BUFFERSIZE), das::LineInfo());
		addIEx("CURLOPT_NOSIGNAL", "CURLOPT_NOSIGNAL", int64_t(CURLoption::CURLOPT_NOSIGNAL), das::LineInfo());
		addIEx("CURLOPT_SHARE", "CURLOPT_SHARE", int64_t(CURLoption::CURLOPT_SHARE), das::LineInfo());
		addIEx("CURLOPT_PROXYTYPE", "CURLOPT_PROXYTYPE", int64_t(CURLoption::CURLOPT_PROXYTYPE), das::LineInfo());
		addIEx("CURLOPT_ACCEPT_ENCODING", "CURLOPT_ACCEPT_ENCODING", int64_t(CURLoption::CURLOPT_ACCEPT_ENCODING), das::LineInfo());
		addIEx("CURLOPT_PRIVATE", "CURLOPT_PRIVATE", int64_t(CURLoption::CURLOPT_PRIVATE), das::LineInfo());
		addIEx("CURLOPT_HTTP200ALIASES", "CURLOPT_HTTP200ALIASES", int64_t(CURLoption::CURLOPT_HTTP200ALIASES), das::LineInfo());
		addIEx("CURLOPT_UNRESTRICTED_AUTH", "CURLOPT_UNRESTRICTED_AUTH", int64_t(CURLoption::CURLOPT_UNRESTRICTED_AUTH), das::LineInfo());
		addIEx("CURLOPT_FTP_USE_EPRT", "CURLOPT_FTP_USE_EPRT", int64_t(CURLoption::CURLOPT_FTP_USE_EPRT), das::LineInfo());
		addIEx("CURLOPT_HTTPAUTH", "CURLOPT_HTTPAUTH", int64_t(CURLoption::CURLOPT_HTTPAUTH), das::LineInfo());
		addIEx("CURLOPT_SSL_CTX_FUNCTION", "CURLOPT_SSL_CTX_FUNCTION", int64_t(CURLoption::CURLOPT_SSL_CTX_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_SSL_CTX_DATA", "CURLOPT_SSL_CTX_DATA", int64_t(CURLoption::CURLOPT_SSL_CTX_DATA), das::LineInfo());
		addIEx("CURLOPT_FTP_CREATE_MISSING_DIRS", "CURLOPT_FTP_CREATE_MISSING_DIRS", int64_t(CURLoption::CURLOPT_FTP_CREATE_MISSING_DIRS), das::LineInfo());
		addIEx("CURLOPT_PROXYAUTH", "CURLOPT_PROXYAUTH", int64_t(CURLoption::CURLOPT_PROXYAUTH), das::LineInfo());
		addIEx("CURLOPT_FTP_RESPONSE_TIMEOUT", "CURLOPT_FTP_RESPONSE_TIMEOUT", int64_t(CURLoption::CURLOPT_FTP_RESPONSE_TIMEOUT), das::LineInfo());
		addIEx("CURLOPT_IPRESOLVE", "CURLOPT_IPRESOLVE", int64_t(CURLoption::CURLOPT_IPRESOLVE), das::LineInfo());
		addIEx("CURLOPT_MAXFILESIZE", "CURLOPT_MAXFILESIZE", int64_t(CURLoption::CURLOPT_MAXFILESIZE), das::LineInfo());
		addIEx("CURLOPT_INFILESIZE_LARGE", "CURLOPT_INFILESIZE_LARGE", int64_t(CURLoption::CURLOPT_INFILESIZE_LARGE), das::LineInfo());
		addIEx("CURLOPT_RESUME_FROM_LARGE", "CURLOPT_RESUME_FROM_LARGE", int64_t(CURLoption::CURLOPT_RESUME_FROM_LARGE), das::LineInfo());
		addIEx("CURLOPT_MAXFILESIZE_LARGE", "CURLOPT_MAXFILESIZE_LARGE", int64_t(CURLoption::CURLOPT_MAXFILESIZE_LARGE), das::LineInfo());
		addIEx("CURLOPT_NETRC_FILE", "CURLOPT_NETRC_FILE", int64_t(CURLoption::CURLOPT_NETRC_FILE), das::LineInfo());
		addIEx("CURLOPT_USE_SSL", "CURLOPT_USE_SSL", int64_t(CURLoption::CURLOPT_USE_SSL), das::LineInfo());
		addIEx("CURLOPT_POSTFIELDSIZE_LARGE", "CURLOPT_POSTFIELDSIZE_LARGE", int64_t(CURLoption::CURLOPT_POSTFIELDSIZE_LARGE), das::LineInfo());
		addIEx("CURLOPT_TCP_NODELAY", "CURLOPT_TCP_NODELAY", int64_t(CURLoption::CURLOPT_TCP_NODELAY), das::LineInfo());
		addIEx("CURLOPT_FTPSSLAUTH", "CURLOPT_FTPSSLAUTH", int64_t(CURLoption::CURLOPT_FTPSSLAUTH), das::LineInfo());
		addIEx("CURLOPT_IOCTLFUNCTION", "CURLOPT_IOCTLFUNCTION", int64_t(CURLoption::CURLOPT_IOCTLFUNCTION), das::LineInfo());
		addIEx("CURLOPT_IOCTLDATA", "CURLOPT_IOCTLDATA", int64_t(CURLoption::CURLOPT_IOCTLDATA), das::LineInfo());
		addIEx("CURLOPT_FTP_ACCOUNT", "CURLOPT_FTP_ACCOUNT", int64_t(CURLoption::CURLOPT_FTP_ACCOUNT), das::LineInfo());
		addIEx("CURLOPT_COOKIELIST", "CURLOPT_COOKIELIST", int64_t(CURLoption::CURLOPT_COOKIELIST), das::LineInfo());
		addIEx("CURLOPT_IGNORE_CONTENT_LENGTH", "CURLOPT_IGNORE_CONTENT_LENGTH", int64_t(CURLoption::CURLOPT_IGNORE_CONTENT_LENGTH), das::LineInfo());
		addIEx("CURLOPT_FTP_SKIP_PASV_IP", "CURLOPT_FTP_SKIP_PASV_IP", int64_t(CURLoption::CURLOPT_FTP_SKIP_PASV_IP), das::LineInfo());
		addIEx("CURLOPT_FTP_FILEMETHOD", "CURLOPT_FTP_FILEMETHOD", int64_t(CURLoption::CURLOPT_FTP_FILEMETHOD), das::LineInfo());
		addIEx("CURLOPT_LOCALPORT", "CURLOPT_LOCALPORT", int64_t(CURLoption::CURLOPT_LOCALPORT), das::LineInfo());
		addIEx("CURLOPT_LOCALPORTRANGE", "CURLOPT_LOCALPORTRANGE", int64_t(CURLoption::CURLOPT_LOCALPORTRANGE), das::LineInfo());
		addIEx("CURLOPT_CONNECT_ONLY", "CURLOPT_CONNECT_ONLY", int64_t(CURLoption::CURLOPT_CONNECT_ONLY), das::LineInfo());
		addIEx("CURLOPT_CONV_FROM_NETWORK_FUNCTION", "CURLOPT_CONV_FROM_NETWORK_FUNCTION", int64_t(CURLoption::CURLOPT_CONV_FROM_NETWORK_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_CONV_TO_NETWORK_FUNCTION", "CURLOPT_CONV_TO_NETWORK_FUNCTION", int64_t(CURLoption::CURLOPT_CONV_TO_NETWORK_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_CONV_FROM_UTF8_FUNCTION", "CURLOPT_CONV_FROM_UTF8_FUNCTION", int64_t(CURLoption::CURLOPT_CONV_FROM_UTF8_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_MAX_SEND_SPEED_LARGE", "CURLOPT_MAX_SEND_SPEED_LARGE", int64_t(CURLoption::CURLOPT_MAX_SEND_SPEED_LARGE), das::LineInfo());
		addIEx("CURLOPT_MAX_RECV_SPEED_LARGE", "CURLOPT_MAX_RECV_SPEED_LARGE", int64_t(CURLoption::CURLOPT_MAX_RECV_SPEED_LARGE), das::LineInfo());
		addIEx("CURLOPT_FTP_ALTERNATIVE_TO_USER", "CURLOPT_FTP_ALTERNATIVE_TO_USER", int64_t(CURLoption::CURLOPT_FTP_ALTERNATIVE_TO_USER), das::LineInfo());
		addIEx("CURLOPT_SOCKOPTFUNCTION", "CURLOPT_SOCKOPTFUNCTION", int64_t(CURLoption::CURLOPT_SOCKOPTFUNCTION), das::LineInfo());
		addIEx("CURLOPT_SOCKOPTDATA", "CURLOPT_SOCKOPTDATA", int64_t(CURLoption::CURLOPT_SOCKOPTDATA), das::LineInfo());
		addIEx("CURLOPT_SSL_SESSIONID_CACHE", "CURLOPT_SSL_SESSIONID_CACHE", int64_t(CURLoption::CURLOPT_SSL_SESSIONID_CACHE), das::LineInfo());
		addIEx("CURLOPT_SSH_AUTH_TYPES", "CURLOPT_SSH_AUTH_TYPES", int64_t(CURLoption::CURLOPT_SSH_AUTH_TYPES), das::LineInfo());
		addIEx("CURLOPT_SSH_PUBLIC_KEYFILE", "CURLOPT_SSH_PUBLIC_KEYFILE", int64_t(CURLoption::CURLOPT_SSH_PUBLIC_KEYFILE), das::LineInfo());
		addIEx("CURLOPT_SSH_PRIVATE_KEYFILE", "CURLOPT_SSH_PRIVATE_KEYFILE", int64_t(CURLoption::CURLOPT_SSH_PRIVATE_KEYFILE), das::LineInfo());
		addIEx("CURLOPT_FTP_SSL_CCC", "CURLOPT_FTP_SSL_CCC", int64_t(CURLoption::CURLOPT_FTP_SSL_CCC), das::LineInfo());
		addIEx("CURLOPT_TIMEOUT_MS", "CURLOPT_TIMEOUT_MS", int64_t(CURLoption::CURLOPT_TIMEOUT_MS), das::LineInfo());
		addIEx("CURLOPT_CONNECTTIMEOUT_MS", "CURLOPT_CONNECTTIMEOUT_MS", int64_t(CURLoption::CURLOPT_CONNECTTIMEOUT_MS), das::LineInfo());
		addIEx("CURLOPT_HTTP_TRANSFER_DECODING", "CURLOPT_HTTP_TRANSFER_DECODING", int64_t(CURLoption::CURLOPT_HTTP_TRANSFER_DECODING), das::LineInfo());
		addIEx("CURLOPT_HTTP_CONTENT_DECODING", "CURLOPT_HTTP_CONTENT_DECODING", int64_t(CURLoption::CURLOPT_HTTP_CONTENT_DECODING), das::LineInfo());
		addIEx("CURLOPT_NEW_FILE_PERMS", "CURLOPT_NEW_FILE_PERMS", int64_t(CURLoption::CURLOPT_NEW_FILE_PERMS), das::LineInfo());
		addIEx("CURLOPT_NEW_DIRECTORY_PERMS", "CURLOPT_NEW_DIRECTORY_PERMS", int64_t(CURLoption::CURLOPT_NEW_DIRECTORY_PERMS), das::LineInfo());
		addIEx("CURLOPT_POSTREDIR", "CURLOPT_POSTREDIR", int64_t(CURLoption::CURLOPT_POSTREDIR), das::LineInfo());
		addIEx("CURLOPT_SSH_HOST_PUBLIC_KEY_MD5", "CURLOPT_SSH_HOST_PUBLIC_KEY_MD5", int64_t(CURLoption::CURLOPT_SSH_HOST_PUBLIC_KEY_MD5), das::LineInfo());
		addIEx("CURLOPT_OPENSOCKETFUNCTION", "CURLOPT_OPENSOCKETFUNCTION", int64_t(CURLoption::CURLOPT_OPENSOCKETFUNCTION), das::LineInfo());
		addIEx("CURLOPT_OPENSOCKETDATA", "CURLOPT_OPENSOCKETDATA", int64_t(CURLoption::CURLOPT_OPENSOCKETDATA), das::LineInfo());
		addIEx("CURLOPT_COPYPOSTFIELDS", "CURLOPT_COPYPOSTFIELDS", int64_t(CURLoption::CURLOPT_COPYPOSTFIELDS), das::LineInfo());
		addIEx("CURLOPT_PROXY_TRANSFER_MODE", "CURLOPT_PROXY_TRANSFER_MODE", int64_t(CURLoption::CURLOPT_PROXY_TRANSFER_MODE), das::LineInfo());
		addIEx("CURLOPT_SEEKFUNCTION", "CURLOPT_SEEKFUNCTION", int64_t(CURLoption::CURLOPT_SEEKFUNCTION), das::LineInfo());
		addIEx("CURLOPT_SEEKDATA", "CURLOPT_SEEKDATA", int64_t(CURLoption::CURLOPT_SEEKDATA), das::LineInfo());
		addIEx("CURLOPT_CRLFILE", "CURLOPT_CRLFILE", int64_t(CURLoption::CURLOPT_CRLFILE), das::LineInfo());
		addIEx("CURLOPT_ISSUERCERT", "CURLOPT_ISSUERCERT", int64_t(CURLoption::CURLOPT_ISSUERCERT), das::LineInfo());
		addIEx("CURLOPT_ADDRESS_SCOPE", "CURLOPT_ADDRESS_SCOPE", int64_t(CURLoption::CURLOPT_ADDRESS_SCOPE), das::LineInfo());
		addIEx("CURLOPT_CERTINFO", "CURLOPT_CERTINFO", int64_t(CURLoption::CURLOPT_CERTINFO), das::LineInfo());
		addIEx("CURLOPT_USERNAME", "CURLOPT_USERNAME", int64_t(CURLoption::CURLOPT_USERNAME), das::LineInfo());
		addIEx("CURLOPT_PASSWORD", "CURLOPT_PASSWORD", int64_t(CURLoption::CURLOPT_PASSWORD), das::LineInfo());
		addIEx("CURLOPT_PROXYUSERNAME", "CURLOPT_PROXYUSERNAME", int64_t(CURLoption::CURLOPT_PROXYUSERNAME), das::LineInfo());
		addIEx("CURLOPT_PROXYPASSWORD", "CURLOPT_PROXYPASSWORD", int64_t(CURLoption::CURLOPT_PROXYPASSWORD), das::LineInfo());
		addIEx("CURLOPT_NOPROXY", "CURLOPT_NOPROXY", int64_t(CURLoption::CURLOPT_NOPROXY), das::LineInfo());
		addIEx("CURLOPT_TFTP_BLKSIZE", "CURLOPT_TFTP_BLKSIZE", int64_t(CURLoption::CURLOPT_TFTP_BLKSIZE), das::LineInfo());
		addIEx("CURLOPT_SOCKS5_GSSAPI_SERVICE", "CURLOPT_SOCKS5_GSSAPI_SERVICE", int64_t(CURLoption::CURLOPT_SOCKS5_GSSAPI_SERVICE), das::LineInfo());
		addIEx("CURLOPT_SOCKS5_GSSAPI_NEC", "CURLOPT_SOCKS5_GSSAPI_NEC", int64_t(CURLoption::CURLOPT_SOCKS5_GSSAPI_NEC), das::LineInfo());
		addIEx("CURLOPT_PROTOCOLS", "CURLOPT_PROTOCOLS", int64_t(CURLoption::CURLOPT_PROTOCOLS), das::LineInfo());
		addIEx("CURLOPT_REDIR_PROTOCOLS", "CURLOPT_REDIR_PROTOCOLS", int64_t(CURLoption::CURLOPT_REDIR_PROTOCOLS), das::LineInfo());
		addIEx("CURLOPT_SSH_KNOWNHOSTS", "CURLOPT_SSH_KNOWNHOSTS", int64_t(CURLoption::CURLOPT_SSH_KNOWNHOSTS), das::LineInfo());
		addIEx("CURLOPT_SSH_KEYFUNCTION", "CURLOPT_SSH_KEYFUNCTION", int64_t(CURLoption::CURLOPT_SSH_KEYFUNCTION), das::LineInfo());
		addIEx("CURLOPT_SSH_KEYDATA", "CURLOPT_SSH_KEYDATA", int64_t(CURLoption::CURLOPT_SSH_KEYDATA), das::LineInfo());
		addIEx("CURLOPT_MAIL_FROM", "CURLOPT_MAIL_FROM", int64_t(CURLoption::CURLOPT_MAIL_FROM), das::LineInfo());
		addIEx("CURLOPT_MAIL_RCPT", "CURLOPT_MAIL_RCPT", int64_t(CURLoption::CURLOPT_MAIL_RCPT), das::LineInfo());
		addIEx("CURLOPT_FTP_USE_PRET", "CURLOPT_FTP_USE_PRET", int64_t(CURLoption::CURLOPT_FTP_USE_PRET), das::LineInfo());
		addIEx("CURLOPT_RTSP_REQUEST", "CURLOPT_RTSP_REQUEST", int64_t(CURLoption::CURLOPT_RTSP_REQUEST), das::LineInfo());
		addIEx("CURLOPT_RTSP_SESSION_ID", "CURLOPT_RTSP_SESSION_ID", int64_t(CURLoption::CURLOPT_RTSP_SESSION_ID), das::LineInfo());
		addIEx("CURLOPT_RTSP_STREAM_URI", "CURLOPT_RTSP_STREAM_URI", int64_t(CURLoption::CURLOPT_RTSP_STREAM_URI), das::LineInfo());
		addIEx("CURLOPT_RTSP_TRANSPORT", "CURLOPT_RTSP_TRANSPORT", int64_t(CURLoption::CURLOPT_RTSP_TRANSPORT), das::LineInfo());
		addIEx("CURLOPT_RTSP_CLIENT_CSEQ", "CURLOPT_RTSP_CLIENT_CSEQ", int64_t(CURLoption::CURLOPT_RTSP_CLIENT_CSEQ), das::LineInfo());
		addIEx("CURLOPT_RTSP_SERVER_CSEQ", "CURLOPT_RTSP_SERVER_CSEQ", int64_t(CURLoption::CURLOPT_RTSP_SERVER_CSEQ), das::LineInfo());
		addIEx("CURLOPT_INTERLEAVEDATA", "CURLOPT_INTERLEAVEDATA", int64_t(CURLoption::CURLOPT_INTERLEAVEDATA), das::LineInfo());
		addIEx("CURLOPT_INTERLEAVEFUNCTION", "CURLOPT_INTERLEAVEFUNCTION", int64_t(CURLoption::CURLOPT_INTERLEAVEFUNCTION), das::LineInfo());
		addIEx("CURLOPT_WILDCARDMATCH", "CURLOPT_WILDCARDMATCH", int64_t(CURLoption::CURLOPT_WILDCARDMATCH), das::LineInfo());
		addIEx("CURLOPT_CHUNK_BGN_FUNCTION", "CURLOPT_CHUNK_BGN_FUNCTION", int64_t(CURLoption::CURLOPT_CHUNK_BGN_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_CHUNK_END_FUNCTION", "CURLOPT_CHUNK_END_FUNCTION", int64_t(CURLoption::CURLOPT_CHUNK_END_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_FNMATCH_FUNCTION", "CURLOPT_FNMATCH_FUNCTION", int64_t(CURLoption::CURLOPT_FNMATCH_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_CHUNK_DATA", "CURLOPT_CHUNK_DATA", int64_t(CURLoption::CURLOPT_CHUNK_DATA), das::LineInfo());
		addIEx("CURLOPT_FNMATCH_DATA", "CURLOPT_FNMATCH_DATA", int64_t(CURLoption::CURLOPT_FNMATCH_DATA), das::LineInfo());
		addIEx("CURLOPT_RESOLVE", "CURLOPT_RESOLVE", int64_t(CURLoption::CURLOPT_RESOLVE), das::LineInfo());
		addIEx("CURLOPT_TLSAUTH_USERNAME", "CURLOPT_TLSAUTH_USERNAME", int64_t(CURLoption::CURLOPT_TLSAUTH_USERNAME), das::LineInfo());
		addIEx("CURLOPT_TLSAUTH_PASSWORD", "CURLOPT_TLSAUTH_PASSWORD", int64_t(CURLoption::CURLOPT_TLSAUTH_PASSWORD), das::LineInfo());
		addIEx("CURLOPT_TLSAUTH_TYPE", "CURLOPT_TLSAUTH_TYPE", int64_t(CURLoption::CURLOPT_TLSAUTH_TYPE), das::LineInfo());
		addIEx("CURLOPT_TRANSFER_ENCODING", "CURLOPT_TRANSFER_ENCODING", int64_t(CURLoption::CURLOPT_TRANSFER_ENCODING), das::LineInfo());
		addIEx("CURLOPT_CLOSESOCKETFUNCTION", "CURLOPT_CLOSESOCKETFUNCTION", int64_t(CURLoption::CURLOPT_CLOSESOCKETFUNCTION), das::LineInfo());
		addIEx("CURLOPT_CLOSESOCKETDATA", "CURLOPT_CLOSESOCKETDATA", int64_t(CURLoption::CURLOPT_CLOSESOCKETDATA), das::LineInfo());
		addIEx("CURLOPT_GSSAPI_DELEGATION", "CURLOPT_GSSAPI_DELEGATION", int64_t(CURLoption::CURLOPT_GSSAPI_DELEGATION), das::LineInfo());
		addIEx("CURLOPT_DNS_SERVERS", "CURLOPT_DNS_SERVERS", int64_t(CURLoption::CURLOPT_DNS_SERVERS), das::LineInfo());
		addIEx("CURLOPT_ACCEPTTIMEOUT_MS", "CURLOPT_ACCEPTTIMEOUT_MS", int64_t(CURLoption::CURLOPT_ACCEPTTIMEOUT_MS), das::LineInfo());
		addIEx("CURLOPT_TCP_KEEPALIVE", "CURLOPT_TCP_KEEPALIVE", int64_t(CURLoption::CURLOPT_TCP_KEEPALIVE), das::LineInfo());
		addIEx("CURLOPT_TCP_KEEPIDLE", "CURLOPT_TCP_KEEPIDLE", int64_t(CURLoption::CURLOPT_TCP_KEEPIDLE), das::LineInfo());
		addIEx("CURLOPT_TCP_KEEPINTVL", "CURLOPT_TCP_KEEPINTVL", int64_t(CURLoption::CURLOPT_TCP_KEEPINTVL), das::LineInfo());
		addIEx("CURLOPT_SSL_OPTIONS", "CURLOPT_SSL_OPTIONS", int64_t(CURLoption::CURLOPT_SSL_OPTIONS), das::LineInfo());
		addIEx("CURLOPT_MAIL_AUTH", "CURLOPT_MAIL_AUTH", int64_t(CURLoption::CURLOPT_MAIL_AUTH), das::LineInfo());
		addIEx("CURLOPT_SASL_IR", "CURLOPT_SASL_IR", int64_t(CURLoption::CURLOPT_SASL_IR), das::LineInfo());
		addIEx("CURLOPT_XFERINFOFUNCTION", "CURLOPT_XFERINFOFUNCTION", int64_t(CURLoption::CURLOPT_XFERINFOFUNCTION), das::LineInfo());
		addIEx("CURLOPT_XOAUTH2_BEARER", "CURLOPT_XOAUTH2_BEARER", int64_t(CURLoption::CURLOPT_XOAUTH2_BEARER), das::LineInfo());
		addIEx("CURLOPT_DNS_INTERFACE", "CURLOPT_DNS_INTERFACE", int64_t(CURLoption::CURLOPT_DNS_INTERFACE), das::LineInfo());
		addIEx("CURLOPT_DNS_LOCAL_IP4", "CURLOPT_DNS_LOCAL_IP4", int64_t(CURLoption::CURLOPT_DNS_LOCAL_IP4), das::LineInfo());
		addIEx("CURLOPT_DNS_LOCAL_IP6", "CURLOPT_DNS_LOCAL_IP6", int64_t(CURLoption::CURLOPT_DNS_LOCAL_IP6), das::LineInfo());
		addIEx("CURLOPT_LOGIN_OPTIONS", "CURLOPT_LOGIN_OPTIONS", int64_t(CURLoption::CURLOPT_LOGIN_OPTIONS), das::LineInfo());
		addIEx("CURLOPT_SSL_ENABLE_NPN", "CURLOPT_SSL_ENABLE_NPN", int64_t(CURLoption::CURLOPT_SSL_ENABLE_NPN), das::LineInfo());
		addIEx("CURLOPT_SSL_ENABLE_ALPN", "CURLOPT_SSL_ENABLE_ALPN", int64_t(CURLoption::CURLOPT_SSL_ENABLE_ALPN), das::LineInfo());
		addIEx("CURLOPT_EXPECT_100_TIMEOUT_MS", "CURLOPT_EXPECT_100_TIMEOUT_MS", int64_t(CURLoption::CURLOPT_EXPECT_100_TIMEOUT_MS), das::LineInfo());
		addIEx("CURLOPT_PROXYHEADER", "CURLOPT_PROXYHEADER", int64_t(CURLoption::CURLOPT_PROXYHEADER), das::LineInfo());
		addIEx("CURLOPT_HEADEROPT", "CURLOPT_HEADEROPT", int64_t(CURLoption::CURLOPT_HEADEROPT), das::LineInfo());
		addIEx("CURLOPT_PINNEDPUBLICKEY", "CURLOPT_PINNEDPUBLICKEY", int64_t(CURLoption::CURLOPT_PINNEDPUBLICKEY), das::LineInfo());
		addIEx("CURLOPT_UNIX_SOCKET_PATH", "CURLOPT_UNIX_SOCKET_PATH", int64_t(CURLoption::CURLOPT_UNIX_SOCKET_PATH), das::LineInfo());
		addIEx("CURLOPT_SSL_VERIFYSTATUS", "CURLOPT_SSL_VERIFYSTATUS", int64_t(CURLoption::CURLOPT_SSL_VERIFYSTATUS), das::LineInfo());
		addIEx("CURLOPT_SSL_FALSESTART", "CURLOPT_SSL_FALSESTART", int64_t(CURLoption::CURLOPT_SSL_FALSESTART), das::LineInfo());
		addIEx("CURLOPT_PATH_AS_IS", "CURLOPT_PATH_AS_IS", int64_t(CURLoption::CURLOPT_PATH_AS_IS), das::LineInfo());
		addIEx("CURLOPT_PROXY_SERVICE_NAME", "CURLOPT_PROXY_SERVICE_NAME", int64_t(CURLoption::CURLOPT_PROXY_SERVICE_NAME), das::LineInfo());
		addIEx("CURLOPT_SERVICE_NAME", "CURLOPT_SERVICE_NAME", int64_t(CURLoption::CURLOPT_SERVICE_NAME), das::LineInfo());
		addIEx("CURLOPT_PIPEWAIT", "CURLOPT_PIPEWAIT", int64_t(CURLoption::CURLOPT_PIPEWAIT), das::LineInfo());
		addIEx("CURLOPT_DEFAULT_PROTOCOL", "CURLOPT_DEFAULT_PROTOCOL", int64_t(CURLoption::CURLOPT_DEFAULT_PROTOCOL), das::LineInfo());
		addIEx("CURLOPT_STREAM_WEIGHT", "CURLOPT_STREAM_WEIGHT", int64_t(CURLoption::CURLOPT_STREAM_WEIGHT), das::LineInfo());
		addIEx("CURLOPT_STREAM_DEPENDS", "CURLOPT_STREAM_DEPENDS", int64_t(CURLoption::CURLOPT_STREAM_DEPENDS), das::LineInfo());
		addIEx("CURLOPT_STREAM_DEPENDS_E", "CURLOPT_STREAM_DEPENDS_E", int64_t(CURLoption::CURLOPT_STREAM_DEPENDS_E), das::LineInfo());
		addIEx("CURLOPT_TFTP_NO_OPTIONS", "CURLOPT_TFTP_NO_OPTIONS", int64_t(CURLoption::CURLOPT_TFTP_NO_OPTIONS), das::LineInfo());
		addIEx("CURLOPT_CONNECT_TO", "CURLOPT_CONNECT_TO", int64_t(CURLoption::CURLOPT_CONNECT_TO), das::LineInfo());
		addIEx("CURLOPT_TCP_FASTOPEN", "CURLOPT_TCP_FASTOPEN", int64_t(CURLoption::CURLOPT_TCP_FASTOPEN), das::LineInfo());
		addIEx("CURLOPT_KEEP_SENDING_ON_ERROR", "CURLOPT_KEEP_SENDING_ON_ERROR", int64_t(CURLoption::CURLOPT_KEEP_SENDING_ON_ERROR), das::LineInfo());
		addIEx("CURLOPT_PROXY_CAINFO", "CURLOPT_PROXY_CAINFO", int64_t(CURLoption::CURLOPT_PROXY_CAINFO), das::LineInfo());
		addIEx("CURLOPT_PROXY_CAPATH", "CURLOPT_PROXY_CAPATH", int64_t(CURLoption::CURLOPT_PROXY_CAPATH), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSL_VERIFYPEER", "CURLOPT_PROXY_SSL_VERIFYPEER", int64_t(CURLoption::CURLOPT_PROXY_SSL_VERIFYPEER), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSL_VERIFYHOST", "CURLOPT_PROXY_SSL_VERIFYHOST", int64_t(CURLoption::CURLOPT_PROXY_SSL_VERIFYHOST), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLVERSION", "CURLOPT_PROXY_SSLVERSION", int64_t(CURLoption::CURLOPT_PROXY_SSLVERSION), das::LineInfo());
		addIEx("CURLOPT_PROXY_TLSAUTH_USERNAME", "CURLOPT_PROXY_TLSAUTH_USERNAME", int64_t(CURLoption::CURLOPT_PROXY_TLSAUTH_USERNAME), das::LineInfo());
		addIEx("CURLOPT_PROXY_TLSAUTH_PASSWORD", "CURLOPT_PROXY_TLSAUTH_PASSWORD", int64_t(CURLoption::CURLOPT_PROXY_TLSAUTH_PASSWORD), das::LineInfo());
		addIEx("CURLOPT_PROXY_TLSAUTH_TYPE", "CURLOPT_PROXY_TLSAUTH_TYPE", int64_t(CURLoption::CURLOPT_PROXY_TLSAUTH_TYPE), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLCERT", "CURLOPT_PROXY_SSLCERT", int64_t(CURLoption::CURLOPT_PROXY_SSLCERT), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLCERTTYPE", "CURLOPT_PROXY_SSLCERTTYPE", int64_t(CURLoption::CURLOPT_PROXY_SSLCERTTYPE), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLKEY", "CURLOPT_PROXY_SSLKEY", int64_t(CURLoption::CURLOPT_PROXY_SSLKEY), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLKEYTYPE", "CURLOPT_PROXY_SSLKEYTYPE", int64_t(CURLoption::CURLOPT_PROXY_SSLKEYTYPE), das::LineInfo());
		addIEx("CURLOPT_PROXY_KEYPASSWD", "CURLOPT_PROXY_KEYPASSWD", int64_t(CURLoption::CURLOPT_PROXY_KEYPASSWD), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSL_CIPHER_LIST", "CURLOPT_PROXY_SSL_CIPHER_LIST", int64_t(CURLoption::CURLOPT_PROXY_SSL_CIPHER_LIST), das::LineInfo());
		addIEx("CURLOPT_PROXY_CRLFILE", "CURLOPT_PROXY_CRLFILE", int64_t(CURLoption::CURLOPT_PROXY_CRLFILE), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSL_OPTIONS", "CURLOPT_PROXY_SSL_OPTIONS", int64_t(CURLoption::CURLOPT_PROXY_SSL_OPTIONS), das::LineInfo());
		addIEx("CURLOPT_PRE_PROXY", "CURLOPT_PRE_PROXY", int64_t(CURLoption::CURLOPT_PRE_PROXY), das::LineInfo());
		addIEx("CURLOPT_PROXY_PINNEDPUBLICKEY", "CURLOPT_PROXY_PINNEDPUBLICKEY", int64_t(CURLoption::CURLOPT_PROXY_PINNEDPUBLICKEY), das::LineInfo());
		addIEx("CURLOPT_ABSTRACT_UNIX_SOCKET", "CURLOPT_ABSTRACT_UNIX_SOCKET", int64_t(CURLoption::CURLOPT_ABSTRACT_UNIX_SOCKET), das::LineInfo());
		addIEx("CURLOPT_SUPPRESS_CONNECT_HEADERS", "CURLOPT_SUPPRESS_CONNECT_HEADERS", int64_t(CURLoption::CURLOPT_SUPPRESS_CONNECT_HEADERS), das::LineInfo());
		addIEx("CURLOPT_REQUEST_TARGET", "CURLOPT_REQUEST_TARGET", int64_t(CURLoption::CURLOPT_REQUEST_TARGET), das::LineInfo());
		addIEx("CURLOPT_SOCKS5_AUTH", "CURLOPT_SOCKS5_AUTH", int64_t(CURLoption::CURLOPT_SOCKS5_AUTH), das::LineInfo());
		addIEx("CURLOPT_SSH_COMPRESSION", "CURLOPT_SSH_COMPRESSION", int64_t(CURLoption::CURLOPT_SSH_COMPRESSION), das::LineInfo());
		addIEx("CURLOPT_MIMEPOST", "CURLOPT_MIMEPOST", int64_t(CURLoption::CURLOPT_MIMEPOST), das::LineInfo());
		addIEx("CURLOPT_TIMEVALUE_LARGE", "CURLOPT_TIMEVALUE_LARGE", int64_t(CURLoption::CURLOPT_TIMEVALUE_LARGE), das::LineInfo());
		addIEx("CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS", "CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS", int64_t(CURLoption::CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS), das::LineInfo());
		addIEx("CURLOPT_RESOLVER_START_FUNCTION", "CURLOPT_RESOLVER_START_FUNCTION", int64_t(CURLoption::CURLOPT_RESOLVER_START_FUNCTION), das::LineInfo());
		addIEx("CURLOPT_RESOLVER_START_DATA", "CURLOPT_RESOLVER_START_DATA", int64_t(CURLoption::CURLOPT_RESOLVER_START_DATA), das::LineInfo());
		addIEx("CURLOPT_HAPROXYPROTOCOL", "CURLOPT_HAPROXYPROTOCOL", int64_t(CURLoption::CURLOPT_HAPROXYPROTOCOL), das::LineInfo());
		addIEx("CURLOPT_DNS_SHUFFLE_ADDRESSES", "CURLOPT_DNS_SHUFFLE_ADDRESSES", int64_t(CURLoption::CURLOPT_DNS_SHUFFLE_ADDRESSES), das::LineInfo());
		addIEx("CURLOPT_TLS13_CIPHERS", "CURLOPT_TLS13_CIPHERS", int64_t(CURLoption::CURLOPT_TLS13_CIPHERS), das::LineInfo());
		addIEx("CURLOPT_PROXY_TLS13_CIPHERS", "CURLOPT_PROXY_TLS13_CIPHERS", int64_t(CURLoption::CURLOPT_PROXY_TLS13_CIPHERS), das::LineInfo());
		addIEx("CURLOPT_DISALLOW_USERNAME_IN_URL", "CURLOPT_DISALLOW_USERNAME_IN_URL", int64_t(CURLoption::CURLOPT_DISALLOW_USERNAME_IN_URL), das::LineInfo());
		addIEx("CURLOPT_DOH_URL", "CURLOPT_DOH_URL", int64_t(CURLoption::CURLOPT_DOH_URL), das::LineInfo());
		addIEx("CURLOPT_UPLOAD_BUFFERSIZE", "CURLOPT_UPLOAD_BUFFERSIZE", int64_t(CURLoption::CURLOPT_UPLOAD_BUFFERSIZE), das::LineInfo());
		addIEx("CURLOPT_UPKEEP_INTERVAL_MS", "CURLOPT_UPKEEP_INTERVAL_MS", int64_t(CURLoption::CURLOPT_UPKEEP_INTERVAL_MS), das::LineInfo());
		addIEx("CURLOPT_CURLU", "CURLOPT_CURLU", int64_t(CURLoption::CURLOPT_CURLU), das::LineInfo());
		addIEx("CURLOPT_TRAILERFUNCTION", "CURLOPT_TRAILERFUNCTION", int64_t(CURLoption::CURLOPT_TRAILERFUNCTION), das::LineInfo());
		addIEx("CURLOPT_TRAILERDATA", "CURLOPT_TRAILERDATA", int64_t(CURLoption::CURLOPT_TRAILERDATA), das::LineInfo());
		addIEx("CURLOPT_HTTP09_ALLOWED", "CURLOPT_HTTP09_ALLOWED", int64_t(CURLoption::CURLOPT_HTTP09_ALLOWED), das::LineInfo());
		addIEx("CURLOPT_ALTSVC_CTRL", "CURLOPT_ALTSVC_CTRL", int64_t(CURLoption::CURLOPT_ALTSVC_CTRL), das::LineInfo());
		addIEx("CURLOPT_ALTSVC", "CURLOPT_ALTSVC", int64_t(CURLoption::CURLOPT_ALTSVC), das::LineInfo());
		addIEx("CURLOPT_MAXAGE_CONN", "CURLOPT_MAXAGE_CONN", int64_t(CURLoption::CURLOPT_MAXAGE_CONN), das::LineInfo());
		addIEx("CURLOPT_SASL_AUTHZID", "CURLOPT_SASL_AUTHZID", int64_t(CURLoption::CURLOPT_SASL_AUTHZID), das::LineInfo());
		addIEx("CURLOPT_MAIL_RCPT_ALLLOWFAILS", "CURLOPT_MAIL_RCPT_ALLLOWFAILS", int64_t(CURLoption::CURLOPT_MAIL_RCPT_ALLLOWFAILS), das::LineInfo());
		addIEx("CURLOPT_SSLCERT_BLOB", "CURLOPT_SSLCERT_BLOB", int64_t(CURLoption::CURLOPT_SSLCERT_BLOB), das::LineInfo());
		addIEx("CURLOPT_SSLKEY_BLOB", "CURLOPT_SSLKEY_BLOB", int64_t(CURLoption::CURLOPT_SSLKEY_BLOB), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLCERT_BLOB", "CURLOPT_PROXY_SSLCERT_BLOB", int64_t(CURLoption::CURLOPT_PROXY_SSLCERT_BLOB), das::LineInfo());
		addIEx("CURLOPT_PROXY_SSLKEY_BLOB", "CURLOPT_PROXY_SSLKEY_BLOB", int64_t(CURLoption::CURLOPT_PROXY_SSLKEY_BLOB), das::LineInfo());
		addIEx("CURLOPT_ISSUERCERT_BLOB", "CURLOPT_ISSUERCERT_BLOB", int64_t(CURLoption::CURLOPT_ISSUERCERT_BLOB), das::LineInfo());
		addIEx("CURLOPT_PROXY_ISSUERCERT", "CURLOPT_PROXY_ISSUERCERT", int64_t(CURLoption::CURLOPT_PROXY_ISSUERCERT), das::LineInfo());
		addIEx("CURLOPT_PROXY_ISSUERCERT_BLOB", "CURLOPT_PROXY_ISSUERCERT_BLOB", int64_t(CURLoption::CURLOPT_PROXY_ISSUERCERT_BLOB), das::LineInfo());
		addIEx("CURLOPT_SSL_EC_CURVES", "CURLOPT_SSL_EC_CURVES", int64_t(CURLoption::CURLOPT_SSL_EC_CURVES), das::LineInfo());
		addIEx("CURLOPT_HSTS_CTRL", "CURLOPT_HSTS_CTRL", int64_t(CURLoption::CURLOPT_HSTS_CTRL), das::LineInfo());
		addIEx("CURLOPT_HSTS", "CURLOPT_HSTS", int64_t(CURLoption::CURLOPT_HSTS), das::LineInfo());
		addIEx("CURLOPT_HSTSREADFUNCTION", "CURLOPT_HSTSREADFUNCTION", int64_t(CURLoption::CURLOPT_HSTSREADFUNCTION), das::LineInfo());
		addIEx("CURLOPT_HSTSREADDATA", "CURLOPT_HSTSREADDATA", int64_t(CURLoption::CURLOPT_HSTSREADDATA), das::LineInfo());
		addIEx("CURLOPT_HSTSWRITEFUNCTION", "CURLOPT_HSTSWRITEFUNCTION", int64_t(CURLoption::CURLOPT_HSTSWRITEFUNCTION), das::LineInfo());
		addIEx("CURLOPT_HSTSWRITEDATA", "CURLOPT_HSTSWRITEDATA", int64_t(CURLoption::CURLOPT_HSTSWRITEDATA), das::LineInfo());
		addIEx("CURLOPT_AWS_SIGV4", "CURLOPT_AWS_SIGV4", int64_t(CURLoption::CURLOPT_AWS_SIGV4), das::LineInfo());
		addIEx("CURLOPT_DOH_SSL_VERIFYPEER", "CURLOPT_DOH_SSL_VERIFYPEER", int64_t(CURLoption::CURLOPT_DOH_SSL_VERIFYPEER), das::LineInfo());
		addIEx("CURLOPT_DOH_SSL_VERIFYHOST", "CURLOPT_DOH_SSL_VERIFYHOST", int64_t(CURLoption::CURLOPT_DOH_SSL_VERIFYHOST), das::LineInfo());
		addIEx("CURLOPT_DOH_SSL_VERIFYSTATUS", "CURLOPT_DOH_SSL_VERIFYSTATUS", int64_t(CURLoption::CURLOPT_DOH_SSL_VERIFYSTATUS), das::LineInfo());
		addIEx("CURLOPT_CAINFO_BLOB", "CURLOPT_CAINFO_BLOB", int64_t(CURLoption::CURLOPT_CAINFO_BLOB), das::LineInfo());
		addIEx("CURLOPT_PROXY_CAINFO_BLOB", "CURLOPT_PROXY_CAINFO_BLOB", int64_t(CURLoption::CURLOPT_PROXY_CAINFO_BLOB), das::LineInfo());
		addIEx("CURLOPT_SSH_HOST_PUBLIC_KEY_SHA256", "CURLOPT_SSH_HOST_PUBLIC_KEY_SHA256", int64_t(CURLoption::CURLOPT_SSH_HOST_PUBLIC_KEY_SHA256), das::LineInfo());
		addIEx("CURLOPT_PREREQFUNCTION", "CURLOPT_PREREQFUNCTION", int64_t(CURLoption::CURLOPT_PREREQFUNCTION), das::LineInfo());
		addIEx("CURLOPT_PREREQDATA", "CURLOPT_PREREQDATA", int64_t(CURLoption::CURLOPT_PREREQDATA), das::LineInfo());
		addIEx("CURLOPT_MAXLIFETIME_CONN", "CURLOPT_MAXLIFETIME_CONN", int64_t(CURLoption::CURLOPT_MAXLIFETIME_CONN), das::LineInfo());
		addIEx("CURLOPT_MIME_OPTIONS", "CURLOPT_MIME_OPTIONS", int64_t(CURLoption::CURLOPT_MIME_OPTIONS), das::LineInfo());
		addIEx("CURLOPT_LASTENTRY", "CURLOPT_LASTENTRY", int64_t(CURLoption::CURLOPT_LASTENTRY), das::LineInfo());
	}
};

class Enumeration_CURL_NETRC_OPTION : public das::Enumeration {
public:
	Enumeration_CURL_NETRC_OPTION() : das::Enumeration("CURL_NETRC_OPTION") {
		external = true;
		cppName = "CURL_NETRC_OPTION";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURL_NETRC_IGNORED", "CURL_NETRC_IGNORED", int64_t(CURL_NETRC_OPTION::CURL_NETRC_IGNORED), das::LineInfo());
		addIEx("AL", "CURL_NETRC_OPTIONAL", int64_t(CURL_NETRC_OPTION::CURL_NETRC_OPTIONAL), das::LineInfo());
		addIEx("CURL_NETRC_REQUIRED", "CURL_NETRC_REQUIRED", int64_t(CURL_NETRC_OPTION::CURL_NETRC_REQUIRED), das::LineInfo());
		addIEx("CURL_NETRC_LAST", "CURL_NETRC_LAST", int64_t(CURL_NETRC_OPTION::CURL_NETRC_LAST), das::LineInfo());
	}
};

class Enumeration_CURL_TLSAUTH : public das::Enumeration {
public:
	Enumeration_CURL_TLSAUTH() : das::Enumeration("CURL_TLSAUTH") {
		external = true;
		cppName = "CURL_TLSAUTH";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "CURL_TLSAUTH_NONE", int64_t(CURL_TLSAUTH::CURL_TLSAUTH_NONE), das::LineInfo());
		addIEx("SRP", "CURL_TLSAUTH_SRP", int64_t(CURL_TLSAUTH::CURL_TLSAUTH_SRP), das::LineInfo());
		addIEx("LAST", "CURL_TLSAUTH_LAST", int64_t(CURL_TLSAUTH::CURL_TLSAUTH_LAST), das::LineInfo());
	}
};

class Enumeration_curl_TimeCond : public das::Enumeration {
public:
	Enumeration_curl_TimeCond() : das::Enumeration("curl_TimeCond") {
		external = true;
		cppName = "curl_TimeCond";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "CURL_TIMECOND_NONE", int64_t(curl_TimeCond::CURL_TIMECOND_NONE), das::LineInfo());
		addIEx("IFMODSINCE", "CURL_TIMECOND_IFMODSINCE", int64_t(curl_TimeCond::CURL_TIMECOND_IFMODSINCE), das::LineInfo());
		addIEx("IFUNMODSINCE", "CURL_TIMECOND_IFUNMODSINCE", int64_t(curl_TimeCond::CURL_TIMECOND_IFUNMODSINCE), das::LineInfo());
		addIEx("LASTMOD", "CURL_TIMECOND_LASTMOD", int64_t(curl_TimeCond::CURL_TIMECOND_LASTMOD), das::LineInfo());
		addIEx("LAST", "CURL_TIMECOND_LAST", int64_t(curl_TimeCond::CURL_TIMECOND_LAST), das::LineInfo());
	}
};

class Enumeration_CURLformoption : public das::Enumeration {
public:
	Enumeration_CURLformoption() : das::Enumeration("CURLformoption") {
		external = true;
		cppName = "CURLformoption";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLFORM_NOTHING", "CURLFORM_NOTHING", int64_t(CURLformoption::CURLFORM_NOTHING), das::LineInfo());
		addIEx("CURLFORM_COPYNAME", "CURLFORM_COPYNAME", int64_t(CURLformoption::CURLFORM_COPYNAME), das::LineInfo());
		addIEx("CURLFORM_PTRNAME", "CURLFORM_PTRNAME", int64_t(CURLformoption::CURLFORM_PTRNAME), das::LineInfo());
		addIEx("CURLFORM_NAMELENGTH", "CURLFORM_NAMELENGTH", int64_t(CURLformoption::CURLFORM_NAMELENGTH), das::LineInfo());
		addIEx("CURLFORM_COPYCONTENTS", "CURLFORM_COPYCONTENTS", int64_t(CURLformoption::CURLFORM_COPYCONTENTS), das::LineInfo());
		addIEx("CURLFORM_PTRCONTENTS", "CURLFORM_PTRCONTENTS", int64_t(CURLformoption::CURLFORM_PTRCONTENTS), das::LineInfo());
		addIEx("CURLFORM_CONTENTSLENGTH", "CURLFORM_CONTENTSLENGTH", int64_t(CURLformoption::CURLFORM_CONTENTSLENGTH), das::LineInfo());
		addIEx("CURLFORM_FILECONTENT", "CURLFORM_FILECONTENT", int64_t(CURLformoption::CURLFORM_FILECONTENT), das::LineInfo());
		addIEx("CURLFORM_ARRAY", "CURLFORM_ARRAY", int64_t(CURLformoption::CURLFORM_ARRAY), das::LineInfo());
		addIEx("CURLFORM_OBSOLETE", "CURLFORM_OBSOLETE", int64_t(CURLformoption::CURLFORM_OBSOLETE), das::LineInfo());
		addIEx("CURLFORM_FILE", "CURLFORM_FILE", int64_t(CURLformoption::CURLFORM_FILE), das::LineInfo());
		addIEx("CURLFORM_BUFFER", "CURLFORM_BUFFER", int64_t(CURLformoption::CURLFORM_BUFFER), das::LineInfo());
		addIEx("CURLFORM_BUFFERPTR", "CURLFORM_BUFFERPTR", int64_t(CURLformoption::CURLFORM_BUFFERPTR), das::LineInfo());
		addIEx("CURLFORM_BUFFERLENGTH", "CURLFORM_BUFFERLENGTH", int64_t(CURLformoption::CURLFORM_BUFFERLENGTH), das::LineInfo());
		addIEx("CURLFORM_CONTENTTYPE", "CURLFORM_CONTENTTYPE", int64_t(CURLformoption::CURLFORM_CONTENTTYPE), das::LineInfo());
		addIEx("CURLFORM_CONTENTHEADER", "CURLFORM_CONTENTHEADER", int64_t(CURLformoption::CURLFORM_CONTENTHEADER), das::LineInfo());
		addIEx("CURLFORM_FILENAME", "CURLFORM_FILENAME", int64_t(CURLformoption::CURLFORM_FILENAME), das::LineInfo());
		addIEx("CURLFORM_END", "CURLFORM_END", int64_t(CURLformoption::CURLFORM_END), das::LineInfo());
		addIEx("CURLFORM_OBSOLETE2", "CURLFORM_OBSOLETE2", int64_t(CURLformoption::CURLFORM_OBSOLETE2), das::LineInfo());
		addIEx("CURLFORM_STREAM", "CURLFORM_STREAM", int64_t(CURLformoption::CURLFORM_STREAM), das::LineInfo());
		addIEx("CURLFORM_CONTENTLEN", "CURLFORM_CONTENTLEN", int64_t(CURLformoption::CURLFORM_CONTENTLEN), das::LineInfo());
		addIEx("CURLFORM_LASTENTRY", "CURLFORM_LASTENTRY", int64_t(CURLformoption::CURLFORM_LASTENTRY), das::LineInfo());
	}
};

class Enumeration_CURLFORMcode : public das::Enumeration {
public:
	Enumeration_CURLFORMcode() : das::Enumeration("CURLFORMcode") {
		external = true;
		cppName = "CURLFORMcode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURL_FORMADD_OK", "CURL_FORMADD_OK", int64_t(CURLFORMcode::CURL_FORMADD_OK), das::LineInfo());
		addIEx("CURL_FORMADD_MEMORY", "CURL_FORMADD_MEMORY", int64_t(CURLFORMcode::CURL_FORMADD_MEMORY), das::LineInfo());
		addIEx("CURL_FORMADD_OPTION_TWICE", "CURL_FORMADD_OPTION_TWICE", int64_t(CURLFORMcode::CURL_FORMADD_OPTION_TWICE), das::LineInfo());
		addIEx("CURL_FORMADD_NULL", "CURL_FORMADD_NULL", int64_t(CURLFORMcode::CURL_FORMADD_NULL), das::LineInfo());
		addIEx("CURL_FORMADD_UNKNOWN_OPTION", "CURL_FORMADD_UNKNOWN_OPTION", int64_t(CURLFORMcode::CURL_FORMADD_UNKNOWN_OPTION), das::LineInfo());
		addIEx("CURL_FORMADD_INCOMPLETE", "CURL_FORMADD_INCOMPLETE", int64_t(CURLFORMcode::CURL_FORMADD_INCOMPLETE), das::LineInfo());
		addIEx("CURL_FORMADD_ILLEGAL_ARRAY", "CURL_FORMADD_ILLEGAL_ARRAY", int64_t(CURLFORMcode::CURL_FORMADD_ILLEGAL_ARRAY), das::LineInfo());
		addIEx("CURL_FORMADD_DISABLED", "CURL_FORMADD_DISABLED", int64_t(CURLFORMcode::CURL_FORMADD_DISABLED), das::LineInfo());
		addIEx("CURL_FORMADD_LAST", "CURL_FORMADD_LAST", int64_t(CURLFORMcode::CURL_FORMADD_LAST), das::LineInfo());
	}
};

class Enumeration_CURLsslset : public das::Enumeration {
public:
	Enumeration_CURLsslset() : das::Enumeration("CURLsslset") {
		external = true;
		cppName = "CURLsslset";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("OK", "CURLSSLSET_OK", int64_t(CURLsslset::CURLSSLSET_OK), das::LineInfo());
		addIEx("UNKNOWN_BACKEND", "CURLSSLSET_UNKNOWN_BACKEND", int64_t(CURLsslset::CURLSSLSET_UNKNOWN_BACKEND), das::LineInfo());
		addIEx("TOO_LATE", "CURLSSLSET_TOO_LATE", int64_t(CURLsslset::CURLSSLSET_TOO_LATE), das::LineInfo());
		addIEx("NO_BACKENDS", "CURLSSLSET_NO_BACKENDS", int64_t(CURLsslset::CURLSSLSET_NO_BACKENDS), das::LineInfo());
	}
};

class Enumeration_CURLINFO : public das::Enumeration {
public:
	Enumeration_CURLINFO() : das::Enumeration("CURLINFO") {
		external = true;
		cppName = "CURLINFO";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "CURLINFO_NONE", int64_t(CURLINFO::CURLINFO_NONE), das::LineInfo());
		addIEx("EFFECTIVE_URL", "CURLINFO_EFFECTIVE_URL", int64_t(CURLINFO::CURLINFO_EFFECTIVE_URL), das::LineInfo());
		addIEx("RESPONSE_CODE", "CURLINFO_RESPONSE_CODE", int64_t(CURLINFO::CURLINFO_RESPONSE_CODE), das::LineInfo());
		addIEx("TOTAL_TIME", "CURLINFO_TOTAL_TIME", int64_t(CURLINFO::CURLINFO_TOTAL_TIME), das::LineInfo());
		addIEx("NAMELOOKUP_TIME", "CURLINFO_NAMELOOKUP_TIME", int64_t(CURLINFO::CURLINFO_NAMELOOKUP_TIME), das::LineInfo());
		addIEx("CONNECT_TIME", "CURLINFO_CONNECT_TIME", int64_t(CURLINFO::CURLINFO_CONNECT_TIME), das::LineInfo());
		addIEx("PRETRANSFER_TIME", "CURLINFO_PRETRANSFER_TIME", int64_t(CURLINFO::CURLINFO_PRETRANSFER_TIME), das::LineInfo());
		addIEx("SIZE_UPLOAD", "CURLINFO_SIZE_UPLOAD", int64_t(CURLINFO::CURLINFO_SIZE_UPLOAD), das::LineInfo());
		addIEx("SIZE_UPLOAD_T", "CURLINFO_SIZE_UPLOAD_T", int64_t(CURLINFO::CURLINFO_SIZE_UPLOAD_T), das::LineInfo());
		addIEx("SIZE_DOWNLOAD", "CURLINFO_SIZE_DOWNLOAD", int64_t(CURLINFO::CURLINFO_SIZE_DOWNLOAD), das::LineInfo());
		addIEx("SIZE_DOWNLOAD_T", "CURLINFO_SIZE_DOWNLOAD_T", int64_t(CURLINFO::CURLINFO_SIZE_DOWNLOAD_T), das::LineInfo());
		addIEx("SPEED_DOWNLOAD", "CURLINFO_SPEED_DOWNLOAD", int64_t(CURLINFO::CURLINFO_SPEED_DOWNLOAD), das::LineInfo());
		addIEx("SPEED_DOWNLOAD_T", "CURLINFO_SPEED_DOWNLOAD_T", int64_t(CURLINFO::CURLINFO_SPEED_DOWNLOAD_T), das::LineInfo());
		addIEx("SPEED_UPLOAD", "CURLINFO_SPEED_UPLOAD", int64_t(CURLINFO::CURLINFO_SPEED_UPLOAD), das::LineInfo());
		addIEx("SPEED_UPLOAD_T", "CURLINFO_SPEED_UPLOAD_T", int64_t(CURLINFO::CURLINFO_SPEED_UPLOAD_T), das::LineInfo());
		addIEx("HEADER_SIZE", "CURLINFO_HEADER_SIZE", int64_t(CURLINFO::CURLINFO_HEADER_SIZE), das::LineInfo());
		addIEx("REQUEST_SIZE", "CURLINFO_REQUEST_SIZE", int64_t(CURLINFO::CURLINFO_REQUEST_SIZE), das::LineInfo());
		addIEx("SSL_VERIFYRESULT", "CURLINFO_SSL_VERIFYRESULT", int64_t(CURLINFO::CURLINFO_SSL_VERIFYRESULT), das::LineInfo());
		addIEx("FILETIME", "CURLINFO_FILETIME", int64_t(CURLINFO::CURLINFO_FILETIME), das::LineInfo());
		addIEx("FILETIME_T", "CURLINFO_FILETIME_T", int64_t(CURLINFO::CURLINFO_FILETIME_T), das::LineInfo());
		addIEx("CONTENT_LENGTH_DOWNLOAD", "CURLINFO_CONTENT_LENGTH_DOWNLOAD", int64_t(CURLINFO::CURLINFO_CONTENT_LENGTH_DOWNLOAD), das::LineInfo());
		addIEx("CONTENT_LENGTH_DOWNLOAD_T", "CURLINFO_CONTENT_LENGTH_DOWNLOAD_T", int64_t(CURLINFO::CURLINFO_CONTENT_LENGTH_DOWNLOAD_T), das::LineInfo());
		addIEx("CONTENT_LENGTH_UPLOAD", "CURLINFO_CONTENT_LENGTH_UPLOAD", int64_t(CURLINFO::CURLINFO_CONTENT_LENGTH_UPLOAD), das::LineInfo());
		addIEx("CONTENT_LENGTH_UPLOAD_T", "CURLINFO_CONTENT_LENGTH_UPLOAD_T", int64_t(CURLINFO::CURLINFO_CONTENT_LENGTH_UPLOAD_T), das::LineInfo());
		addIEx("STARTTRANSFER_TIME", "CURLINFO_STARTTRANSFER_TIME", int64_t(CURLINFO::CURLINFO_STARTTRANSFER_TIME), das::LineInfo());
		addIEx("CONTENT_TYPE", "CURLINFO_CONTENT_TYPE", int64_t(CURLINFO::CURLINFO_CONTENT_TYPE), das::LineInfo());
		addIEx("REDIRECT_TIME", "CURLINFO_REDIRECT_TIME", int64_t(CURLINFO::CURLINFO_REDIRECT_TIME), das::LineInfo());
		addIEx("REDIRECT_COUNT", "CURLINFO_REDIRECT_COUNT", int64_t(CURLINFO::CURLINFO_REDIRECT_COUNT), das::LineInfo());
		addIEx("PRIVATE", "CURLINFO_PRIVATE", int64_t(CURLINFO::CURLINFO_PRIVATE), das::LineInfo());
		addIEx("HTTP_CONNECTCODE", "CURLINFO_HTTP_CONNECTCODE", int64_t(CURLINFO::CURLINFO_HTTP_CONNECTCODE), das::LineInfo());
		addIEx("HTTPAUTH_AVAIL", "CURLINFO_HTTPAUTH_AVAIL", int64_t(CURLINFO::CURLINFO_HTTPAUTH_AVAIL), das::LineInfo());
		addIEx("PROXYAUTH_AVAIL", "CURLINFO_PROXYAUTH_AVAIL", int64_t(CURLINFO::CURLINFO_PROXYAUTH_AVAIL), das::LineInfo());
		addIEx("OS_ERRNO", "CURLINFO_OS_ERRNO", int64_t(CURLINFO::CURLINFO_OS_ERRNO), das::LineInfo());
		addIEx("NUM_CONNECTS", "CURLINFO_NUM_CONNECTS", int64_t(CURLINFO::CURLINFO_NUM_CONNECTS), das::LineInfo());
		addIEx("SSL_ENGINES", "CURLINFO_SSL_ENGINES", int64_t(CURLINFO::CURLINFO_SSL_ENGINES), das::LineInfo());
		addIEx("COOKIELIST", "CURLINFO_COOKIELIST", int64_t(CURLINFO::CURLINFO_COOKIELIST), das::LineInfo());
		addIEx("LASTSOCKET", "CURLINFO_LASTSOCKET", int64_t(CURLINFO::CURLINFO_LASTSOCKET), das::LineInfo());
		addIEx("FTP_ENTRY_PATH", "CURLINFO_FTP_ENTRY_PATH", int64_t(CURLINFO::CURLINFO_FTP_ENTRY_PATH), das::LineInfo());
		addIEx("REDIRECT_URL", "CURLINFO_REDIRECT_URL", int64_t(CURLINFO::CURLINFO_REDIRECT_URL), das::LineInfo());
		addIEx("PRIMARY_IP", "CURLINFO_PRIMARY_IP", int64_t(CURLINFO::CURLINFO_PRIMARY_IP), das::LineInfo());
		addIEx("APPCONNECT_TIME", "CURLINFO_APPCONNECT_TIME", int64_t(CURLINFO::CURLINFO_APPCONNECT_TIME), das::LineInfo());
		addIEx("CERTINFO", "CURLINFO_CERTINFO", int64_t(CURLINFO::CURLINFO_CERTINFO), das::LineInfo());
		addIEx("CONDITION_UNMET", "CURLINFO_CONDITION_UNMET", int64_t(CURLINFO::CURLINFO_CONDITION_UNMET), das::LineInfo());
		addIEx("RTSP_SESSION_ID", "CURLINFO_RTSP_SESSION_ID", int64_t(CURLINFO::CURLINFO_RTSP_SESSION_ID), das::LineInfo());
		addIEx("RTSP_CLIENT_CSEQ", "CURLINFO_RTSP_CLIENT_CSEQ", int64_t(CURLINFO::CURLINFO_RTSP_CLIENT_CSEQ), das::LineInfo());
		addIEx("RTSP_SERVER_CSEQ", "CURLINFO_RTSP_SERVER_CSEQ", int64_t(CURLINFO::CURLINFO_RTSP_SERVER_CSEQ), das::LineInfo());
		addIEx("RTSP_CSEQ_RECV", "CURLINFO_RTSP_CSEQ_RECV", int64_t(CURLINFO::CURLINFO_RTSP_CSEQ_RECV), das::LineInfo());
		addIEx("PRIMARY_PORT", "CURLINFO_PRIMARY_PORT", int64_t(CURLINFO::CURLINFO_PRIMARY_PORT), das::LineInfo());
		addIEx("LOCAL_IP", "CURLINFO_LOCAL_IP", int64_t(CURLINFO::CURLINFO_LOCAL_IP), das::LineInfo());
		addIEx("LOCAL_PORT", "CURLINFO_LOCAL_PORT", int64_t(CURLINFO::CURLINFO_LOCAL_PORT), das::LineInfo());
		addIEx("TLS_SESSION", "CURLINFO_TLS_SESSION", int64_t(CURLINFO::CURLINFO_TLS_SESSION), das::LineInfo());
		addIEx("ACTIVESOCKET", "CURLINFO_ACTIVESOCKET", int64_t(CURLINFO::CURLINFO_ACTIVESOCKET), das::LineInfo());
		addIEx("TLS_SSL_PTR", "CURLINFO_TLS_SSL_PTR", int64_t(CURLINFO::CURLINFO_TLS_SSL_PTR), das::LineInfo());
		addIEx("HTTP_VERSION", "CURLINFO_HTTP_VERSION", int64_t(CURLINFO::CURLINFO_HTTP_VERSION), das::LineInfo());
		addIEx("PROXY_SSL_VERIFYRESULT", "CURLINFO_PROXY_SSL_VERIFYRESULT", int64_t(CURLINFO::CURLINFO_PROXY_SSL_VERIFYRESULT), das::LineInfo());
		addIEx("PROTOCOL", "CURLINFO_PROTOCOL", int64_t(CURLINFO::CURLINFO_PROTOCOL), das::LineInfo());
		addIEx("SCHEME", "CURLINFO_SCHEME", int64_t(CURLINFO::CURLINFO_SCHEME), das::LineInfo());
		addIEx("TOTAL_TIME_T", "CURLINFO_TOTAL_TIME_T", int64_t(CURLINFO::CURLINFO_TOTAL_TIME_T), das::LineInfo());
		addIEx("NAMELOOKUP_TIME_T", "CURLINFO_NAMELOOKUP_TIME_T", int64_t(CURLINFO::CURLINFO_NAMELOOKUP_TIME_T), das::LineInfo());
		addIEx("CONNECT_TIME_T", "CURLINFO_CONNECT_TIME_T", int64_t(CURLINFO::CURLINFO_CONNECT_TIME_T), das::LineInfo());
		addIEx("PRETRANSFER_TIME_T", "CURLINFO_PRETRANSFER_TIME_T", int64_t(CURLINFO::CURLINFO_PRETRANSFER_TIME_T), das::LineInfo());
		addIEx("STARTTRANSFER_TIME_T", "CURLINFO_STARTTRANSFER_TIME_T", int64_t(CURLINFO::CURLINFO_STARTTRANSFER_TIME_T), das::LineInfo());
		addIEx("REDIRECT_TIME_T", "CURLINFO_REDIRECT_TIME_T", int64_t(CURLINFO::CURLINFO_REDIRECT_TIME_T), das::LineInfo());
		addIEx("APPCONNECT_TIME_T", "CURLINFO_APPCONNECT_TIME_T", int64_t(CURLINFO::CURLINFO_APPCONNECT_TIME_T), das::LineInfo());
		addIEx("RETRY_AFTER", "CURLINFO_RETRY_AFTER", int64_t(CURLINFO::CURLINFO_RETRY_AFTER), das::LineInfo());
		addIEx("EFFECTIVE_METHOD", "CURLINFO_EFFECTIVE_METHOD", int64_t(CURLINFO::CURLINFO_EFFECTIVE_METHOD), das::LineInfo());
		addIEx("PROXY_ERROR", "CURLINFO_PROXY_ERROR", int64_t(CURLINFO::CURLINFO_PROXY_ERROR), das::LineInfo());
		addIEx("REFERER", "CURLINFO_REFERER", int64_t(CURLINFO::CURLINFO_REFERER), das::LineInfo());
		addIEx("LASTONE", "CURLINFO_LASTONE", int64_t(CURLINFO::CURLINFO_LASTONE), das::LineInfo());
	}
};

class Enumeration_curl_closepolicy : public das::Enumeration {
public:
	Enumeration_curl_closepolicy() : das::Enumeration("curl_closepolicy") {
		external = true;
		cppName = "curl_closepolicy";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLCLOSEPOLICY_NONE", "CURLCLOSEPOLICY_NONE", int64_t(curl_closepolicy::CURLCLOSEPOLICY_NONE), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_OLDEST", "CURLCLOSEPOLICY_OLDEST", int64_t(curl_closepolicy::CURLCLOSEPOLICY_OLDEST), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_LEAST_RECENTLY_USED", "CURLCLOSEPOLICY_LEAST_RECENTLY_USED", int64_t(curl_closepolicy::CURLCLOSEPOLICY_LEAST_RECENTLY_USED), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_LEAST_TRAFFIC", "CURLCLOSEPOLICY_LEAST_TRAFFIC", int64_t(curl_closepolicy::CURLCLOSEPOLICY_LEAST_TRAFFIC), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_SLOWEST", "CURLCLOSEPOLICY_SLOWEST", int64_t(curl_closepolicy::CURLCLOSEPOLICY_SLOWEST), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_CALLBACK", "CURLCLOSEPOLICY_CALLBACK", int64_t(curl_closepolicy::CURLCLOSEPOLICY_CALLBACK), das::LineInfo());
		addIEx("CURLCLOSEPOLICY_LAST", "CURLCLOSEPOLICY_LAST", int64_t(curl_closepolicy::CURLCLOSEPOLICY_LAST), das::LineInfo());
	}
};

class Enumeration_curl_lock_data : public das::Enumeration {
public:
	Enumeration_curl_lock_data() : das::Enumeration("curl_lock_data") {
		external = true;
		cppName = "curl_lock_data";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "CURL_LOCK_DATA_NONE", int64_t(curl_lock_data::CURL_LOCK_DATA_NONE), das::LineInfo());
		addIEx("SHARE", "CURL_LOCK_DATA_SHARE", int64_t(curl_lock_data::CURL_LOCK_DATA_SHARE), das::LineInfo());
		addIEx("COOKIE", "CURL_LOCK_DATA_COOKIE", int64_t(curl_lock_data::CURL_LOCK_DATA_COOKIE), das::LineInfo());
		addIEx("DNS", "CURL_LOCK_DATA_DNS", int64_t(curl_lock_data::CURL_LOCK_DATA_DNS), das::LineInfo());
		addIEx("SSL_SESSION", "CURL_LOCK_DATA_SSL_SESSION", int64_t(curl_lock_data::CURL_LOCK_DATA_SSL_SESSION), das::LineInfo());
		addIEx("CONNECT", "CURL_LOCK_DATA_CONNECT", int64_t(curl_lock_data::CURL_LOCK_DATA_CONNECT), das::LineInfo());
		addIEx("PSL", "CURL_LOCK_DATA_PSL", int64_t(curl_lock_data::CURL_LOCK_DATA_PSL), das::LineInfo());
		addIEx("LAST", "CURL_LOCK_DATA_LAST", int64_t(curl_lock_data::CURL_LOCK_DATA_LAST), das::LineInfo());
	}
};

class Enumeration_curl_lock_access : public das::Enumeration {
public:
	Enumeration_curl_lock_access() : das::Enumeration("curl_lock_access") {
		external = true;
		cppName = "curl_lock_access";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "CURL_LOCK_ACCESS_NONE", int64_t(curl_lock_access::CURL_LOCK_ACCESS_NONE), das::LineInfo());
		addIEx("SHARED", "CURL_LOCK_ACCESS_SHARED", int64_t(curl_lock_access::CURL_LOCK_ACCESS_SHARED), das::LineInfo());
		addIEx("SINGLE", "CURL_LOCK_ACCESS_SINGLE", int64_t(curl_lock_access::CURL_LOCK_ACCESS_SINGLE), das::LineInfo());
		addIEx("LAST", "CURL_LOCK_ACCESS_LAST", int64_t(curl_lock_access::CURL_LOCK_ACCESS_LAST), das::LineInfo());
	}
};

class Enumeration_CURLSHcode : public das::Enumeration {
public:
	Enumeration_CURLSHcode() : das::Enumeration("CURLSHcode") {
		external = true;
		cppName = "CURLSHcode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLSHE_OK", "CURLSHE_OK", int64_t(CURLSHcode::CURLSHE_OK), das::LineInfo());
		addIEx("CURLSHE_BAD_OPTION", "CURLSHE_BAD_OPTION", int64_t(CURLSHcode::CURLSHE_BAD_OPTION), das::LineInfo());
		addIEx("CURLSHE_IN_USE", "CURLSHE_IN_USE", int64_t(CURLSHcode::CURLSHE_IN_USE), das::LineInfo());
		addIEx("CURLSHE_INVALID", "CURLSHE_INVALID", int64_t(CURLSHcode::CURLSHE_INVALID), das::LineInfo());
		addIEx("CURLSHE_NOMEM", "CURLSHE_NOMEM", int64_t(CURLSHcode::CURLSHE_NOMEM), das::LineInfo());
		addIEx("CURLSHE_NOT_BUILT_IN", "CURLSHE_NOT_BUILT_IN", int64_t(CURLSHcode::CURLSHE_NOT_BUILT_IN), das::LineInfo());
		addIEx("CURLSHE_LAST", "CURLSHE_LAST", int64_t(CURLSHcode::CURLSHE_LAST), das::LineInfo());
	}
};

class Enumeration_CURLSHoption : public das::Enumeration {
public:
	Enumeration_CURLSHoption() : das::Enumeration("CURLSHoption") {
		external = true;
		cppName = "CURLSHoption";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CURLSHOPT_NONE", "CURLSHOPT_NONE", int64_t(CURLSHoption::CURLSHOPT_NONE), das::LineInfo());
		addIEx("CURLSHOPT_SHARE", "CURLSHOPT_SHARE", int64_t(CURLSHoption::CURLSHOPT_SHARE), das::LineInfo());
		addIEx("CURLSHOPT_UNSHARE", "CURLSHOPT_UNSHARE", int64_t(CURLSHoption::CURLSHOPT_UNSHARE), das::LineInfo());
		addIEx("CURLSHOPT_LOCKFUNC", "CURLSHOPT_LOCKFUNC", int64_t(CURLSHoption::CURLSHOPT_LOCKFUNC), das::LineInfo());
		addIEx("CURLSHOPT_UNLOCKFUNC", "CURLSHOPT_UNLOCKFUNC", int64_t(CURLSHoption::CURLSHOPT_UNLOCKFUNC), das::LineInfo());
		addIEx("CURLSHOPT_USERDATA", "CURLSHOPT_USERDATA", int64_t(CURLSHoption::CURLSHOPT_USERDATA), das::LineInfo());
		addIEx("CURLSHOPT_LAST", "CURLSHOPT_LAST", int64_t(CURLSHoption::CURLSHOPT_LAST), das::LineInfo());
	}
};

class Enumeration_CURLversion : public das::Enumeration {
public:
	Enumeration_CURLversion() : das::Enumeration("CURLversion") {
		external = true;
		cppName = "CURLversion";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("FIRST", "CURLVERSION_FIRST", int64_t(CURLversion::CURLVERSION_FIRST), das::LineInfo());
		addIEx("SECOND", "CURLVERSION_SECOND", int64_t(CURLversion::CURLVERSION_SECOND), das::LineInfo());
		addIEx("THIRD", "CURLVERSION_THIRD", int64_t(CURLversion::CURLVERSION_THIRD), das::LineInfo());
		addIEx("FOURTH", "CURLVERSION_FOURTH", int64_t(CURLversion::CURLVERSION_FOURTH), das::LineInfo());
		addIEx("FIFTH", "CURLVERSION_FIFTH", int64_t(CURLversion::CURLVERSION_FIFTH), das::LineInfo());
		addIEx("SIXTH", "CURLVERSION_SIXTH", int64_t(CURLversion::CURLVERSION_SIXTH), das::LineInfo());
		addIEx("SEVENTH", "CURLVERSION_SEVENTH", int64_t(CURLversion::CURLVERSION_SEVENTH), das::LineInfo());
		addIEx("EIGHTH", "CURLVERSION_EIGHTH", int64_t(CURLversion::CURLVERSION_EIGHTH), das::LineInfo());
		addIEx("NINTH", "CURLVERSION_NINTH", int64_t(CURLversion::CURLVERSION_NINTH), das::LineInfo());
		addIEx("TENTH", "CURLVERSION_TENTH", int64_t(CURLversion::CURLVERSION_TENTH), das::LineInfo());
		addIEx("LAST", "CURLVERSION_LAST", int64_t(CURLversion::CURLVERSION_LAST), das::LineInfo());
	}
};

