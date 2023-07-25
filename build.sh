#!/usr/bin/env bash

set -euxo pipefail

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

docker build "$SCRIPT_DIR" -t bofh-build-img
docker run --rm --mount type=bind,src="$SCRIPT_DIR",dst=/compile-dir bofh-build-img
echo "Build succeeded."
