#!/bin/sh
set -e
set -x

SOFILE=$(node -p 'require(".")')
VERSION=$(npx mongodb-csfle-library-version $SOFILE)
test "$VERSION" = "mongo_csfle_v1-dummy (0x0001000000000000)"
