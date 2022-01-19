
IF ((NOT DAS_CURL_INCLUDED) AND ((NOT ${DAS_CURL_DISABLED}) OR (NOT DEFINED DAS_CURL_DISABLED)))
  SET(DAS_CURL_INCLUDED TRUE)
  MESSAGE(STATUS "dasCurl module included.")

  IF (NOT DEFINED DAS_CURL_BIND_DIR)
    SET(DAS_CURL_BIND_DIR ${PROJECT_SOURCE_DIR}/modules/dasCurl)
  ENDIF()

  LIST(APPEND CMAKE_MODULE_PATH ${DAS_CURL_BIND_DIR})

  set(CURL_SOURCE_DIR ${DAS_CURL_BIND_DIR}/curl)
  set(HTTP_ONLY YES)
  set(BUILD_CURL_EXE OFF)
  set(BUILD_SHARED_LIBS OFF)
  set(CURL_STATICLIB YES)
  set(BUILDING_LIBCURL YES)
  set(CURL_DISABLE_LDAP YES)

  set(CURL_ENABLE_SSL ON)
  set(CURL_USE_SCHANNEL ON) # enable Windows native SSL/TLS


  #message("CURL_SOURCE_DIR = '${CURL_SOURCE_DIR}'")
  # add_subdirectory(CURL_SOURCE_DIR) # doesn't work ???
  add_subdirectory(${DAS_CURL_BIND_DIR}/curl)

	# libDasModuleCurl
  SET(DAS_CURL_BIND_MODULE_SRC
		${DAS_CURL_BIND_DIR}/src/need_curl.h
		${DAS_CURL_BIND_DIR}/src/curl.h
		${DAS_CURL_BIND_DIR}/src/curl.cpp
	# user include
		${DAS_CURL_BIND_DIR}/src/curl.main.cpp
	# generated binding includes
		${DAS_CURL_BIND_DIR}/src/curl.alias.add.inc
		${DAS_CURL_BIND_DIR}/src/curl.dummy.add.inc
		${DAS_CURL_BIND_DIR}/src/curl.enum.add.inc
		${DAS_CURL_BIND_DIR}/src/curl.enum.class.inc
		${DAS_CURL_BIND_DIR}/src/curl.enum.decl.inc
		${DAS_CURL_BIND_DIR}/src/curl.enum.decl.cast.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.add.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.postadd.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.class.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.decl.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.impl.inc
		${DAS_CURL_BIND_DIR}/src/curl.struct.cast.inc
		${DAS_CURL_BIND_DIR}/src/curl.func.reg.inc
		${DAS_CURL_BIND_DIR}/src/curl.func.decl.inc
		${DAS_CURL_BIND_DIR}/src/curl.func.aot.inc
		${DAS_CURL_BIND_DIR}/src/curl.func.aot.decl.inc
	# generated functions
		${DAS_CURL_BIND_DIR}/src/curl.func_1.cpp
		${DAS_CURL_BIND_DIR}/src/curl.func_2.cpp
	)

	ADD_MODULE_LIB(libDasModuleCurl)
	ADD_MODULE_CPP(curl)
	ADD_LIBRARY(libDasModuleCurl ${DAS_CURL_BIND_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleCurl
    libcurl
  )
	ADD_DEPENDENCIES(libDasModuleCurl libcurl)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleCurl PUBLIC
    # ${CURL_SOURCE_DIR}/include
  )
	SETUP_CPP11(libDasModuleCurl)

ENDIF()
