#!/bin/sh
set -e
set -x

SOFILE=$(node -p 'require(".")')
VERSION=$(npx mongodb-crypt-library-version $SOFILE)
test "$VERSION" = "mongo_crypt_v1-dummy (0x0001000000000000)"
