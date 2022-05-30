#include <stdint.h>

#ifdef _WIN32
#define MONGO_API_CALL __cdecl
#define MONGO_API_EXPORT __declspec(dllexport)
#else
#define MONGO_API_CALL
#define MONGO_API_EXPORT __attribute__((used, visibility("default")))
#endif

MONGO_API_EXPORT
uint64_t MONGO_API_CALL mongo_csfle_v1_get_version() {
  return 0x0001000000000000ULL;
}

MONGO_API_EXPORT
const char* MONGO_API_CALL mongo_csfle_v1_get_version_str() {
  return "mongo_crypt_v1-dummy";
}

MONGO_API_EXPORT
uint64_t MONGO_API_CALL mongo_crypt_v1_get_version() {
  return 0x0001000000000000ULL;
}

MONGO_API_EXPORT
const char* MONGO_API_CALL mongo_crypt_v1_get_version_str() {
  return "mongo_crypt_v1-dummy";
}
