// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

struct curl_httppost_GeneratedAnnotation : ManagedStructureAnnotation<curl_httppost> {
	curl_httppost_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_httppost", ml, "curl_httppost") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(next)>("next","next");
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(namelength)>("namelength","namelength");
		addField<DAS_BIND_MANAGED_FIELD(contents)>("contents","contents");
		addField<DAS_BIND_MANAGED_FIELD(contentslength)>("contentslength","contentslength");
		addField<DAS_BIND_MANAGED_FIELD(buffer)>("buffer","buffer");
		addField<DAS_BIND_MANAGED_FIELD(bufferlength)>("bufferlength","bufferlength");
		addField<DAS_BIND_MANAGED_FIELD(contenttype)>("contenttype","contenttype");
		addField<DAS_BIND_MANAGED_FIELD(contentheader)>("contentheader","contentheader");
		addField<DAS_BIND_MANAGED_FIELD(more)>("more","more");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
		addField<DAS_BIND_MANAGED_FIELD(showfilename)>("showfilename","showfilename");
		addField<DAS_BIND_MANAGED_FIELD(userp)>("userp","userp");
		addField<DAS_BIND_MANAGED_FIELD(contentlen)>("contentlen","contentlen");
	}
};

struct curl_khkey_GeneratedAnnotation : ManagedStructureAnnotation<curl_khkey> {
	curl_khkey_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_khkey", ml, "curl_khkey") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(key)>("key","key");
		addField<DAS_BIND_MANAGED_FIELD(len)>("len","len");
		addField<DAS_BIND_MANAGED_FIELD(keytype)>("keytype","keytype");
	}
};

struct curl_hstsentry_GeneratedAnnotation : ManagedStructureAnnotation<curl_hstsentry> {
	curl_hstsentry_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_hstsentry", ml, "curl_hstsentry") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(namelen)>("namelen","namelen");
		addField<DAS_BIND_MANAGED_FIELD(expire)>("expire","expire");
	}
};

struct curl_index_GeneratedAnnotation : ManagedStructureAnnotation<curl_index> {
	curl_index_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_index", ml, "curl_index") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(index)>("index","index");
		addField<DAS_BIND_MANAGED_FIELD(total)>("total","total");
	}
};

struct curl_forms_GeneratedAnnotation : ManagedStructureAnnotation<curl_forms> {
	curl_forms_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_forms", ml, "curl_forms") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(option)>("option","option");
		addField<DAS_BIND_MANAGED_FIELD(value)>("value","value");
	}
};

struct curl_slist_GeneratedAnnotation : ManagedStructureAnnotation<curl_slist> {
	curl_slist_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_slist", ml, "curl_slist") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(next)>("next","next");
	}
};

struct curl_ssl_backend_GeneratedAnnotation : ManagedStructureAnnotation<curl_ssl_backend> {
	curl_ssl_backend_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_ssl_backend", ml, "curl_ssl_backend") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
	}
};

struct curl_certinfo_GeneratedAnnotation : ManagedStructureAnnotation<curl_certinfo> {
	curl_certinfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_certinfo", ml, "curl_certinfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(num_of_certs)>("num_of_certs","num_of_certs");
		addField<DAS_BIND_MANAGED_FIELD(certinfo)>("certinfo","certinfo");
	}
};

struct curl_tlssessioninfo_GeneratedAnnotation : ManagedStructureAnnotation<curl_tlssessioninfo> {
	curl_tlssessioninfo_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_tlssessioninfo", ml, "curl_tlssessioninfo") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(backend)>("backend","backend");
		addField<DAS_BIND_MANAGED_FIELD(internals)>("internals","internals");
	}
};

struct curl_version_info_data_GeneratedAnnotation : ManagedStructureAnnotation<curl_version_info_data> {
	curl_version_info_data_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_version_info_data", ml, "curl_version_info_data") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(age)>("age","age");
		addField<DAS_BIND_MANAGED_FIELD(version)>("version","version");
		addField<DAS_BIND_MANAGED_FIELD(version_num)>("version_num","version_num");
		addField<DAS_BIND_MANAGED_FIELD(host)>("host","host");
		addField<DAS_BIND_MANAGED_FIELD(features)>("features","features");
		addField<DAS_BIND_MANAGED_FIELD(ssl_version)>("ssl_version","ssl_version");
		addField<DAS_BIND_MANAGED_FIELD(ssl_version_num)>("ssl_version_num","ssl_version_num");
		addField<DAS_BIND_MANAGED_FIELD(libz_version)>("libz_version","libz_version");
		addField<DAS_BIND_MANAGED_FIELD(protocols)>("protocols","protocols");
		addField<DAS_BIND_MANAGED_FIELD(ares)>("ares","ares");
		addField<DAS_BIND_MANAGED_FIELD(ares_num)>("ares_num","ares_num");
		addField<DAS_BIND_MANAGED_FIELD(libidn)>("libidn","libidn");
		addField<DAS_BIND_MANAGED_FIELD(iconv_ver_num)>("iconv_ver_num","iconv_ver_num");
		addField<DAS_BIND_MANAGED_FIELD(libssh_version)>("libssh_version","libssh_version");
		addField<DAS_BIND_MANAGED_FIELD(brotli_ver_num)>("brotli_ver_num","brotli_ver_num");
		addField<DAS_BIND_MANAGED_FIELD(brotli_version)>("brotli_version","brotli_version");
		addField<DAS_BIND_MANAGED_FIELD(nghttp2_ver_num)>("nghttp2_ver_num","nghttp2_ver_num");
		addField<DAS_BIND_MANAGED_FIELD(nghttp2_version)>("nghttp2_version","nghttp2_version");
		addField<DAS_BIND_MANAGED_FIELD(quic_version)>("quic_version","quic_version");
		addField<DAS_BIND_MANAGED_FIELD(cainfo)>("cainfo","cainfo");
		addField<DAS_BIND_MANAGED_FIELD(capath)>("capath","capath");
		addField<DAS_BIND_MANAGED_FIELD(zstd_ver_num)>("zstd_ver_num","zstd_ver_num");
		addField<DAS_BIND_MANAGED_FIELD(zstd_version)>("zstd_version","zstd_version");
		addField<DAS_BIND_MANAGED_FIELD(hyper_version)>("hyper_version","hyper_version");
		addField<DAS_BIND_MANAGED_FIELD(gsasl_version)>("gsasl_version","gsasl_version");
	}
};

struct curl_blob_GeneratedAnnotation : ManagedStructureAnnotation<curl_blob> {
	curl_blob_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_blob", ml, "curl_blob") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(data)>("data","data");
		addField<DAS_BIND_MANAGED_FIELD(len)>("len","len");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

struct curl_waitfd_GeneratedAnnotation : ManagedStructureAnnotation<curl_waitfd> {
	curl_waitfd_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_waitfd", ml, "curl_waitfd") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(fd)>("fd","fd");
		addField<DAS_BIND_MANAGED_FIELD(events)>("events","events");
		addField<DAS_BIND_MANAGED_FIELD(revents)>("revents","revents");
	}
};

struct curl_easyoption_GeneratedAnnotation : ManagedStructureAnnotation<curl_easyoption> {
	curl_easyoption_GeneratedAnnotation(ModuleLibrary & ml) : ManagedStructureAnnotation ("curl_easyoption", ml, "curl_easyoption") {
	}
	void init () {
		addField<DAS_BIND_MANAGED_FIELD(name)>("name","name");
		addField<DAS_BIND_MANAGED_FIELD(id)>("id","id");
		addField<DAS_BIND_MANAGED_FIELD(type)>("_type","type");
		addField<DAS_BIND_MANAGED_FIELD(flags)>("flags","flags");
	}
};

