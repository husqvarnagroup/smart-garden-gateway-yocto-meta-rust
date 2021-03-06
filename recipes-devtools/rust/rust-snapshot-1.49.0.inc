require rust-snapshot.inc

## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.48.0"
CARGO_VERSION = "1.48.0"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "1c00a6a0dabbf6290728b09f9307d9fa6cc985487f727075c68acd4a600ef3f8"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "fc4d292a52cbb6b84fb9f065d0d7596064a9b957381d639d5a750d6e2bf02483"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "b11d595581e2580c069b5039214e1031a0e4f87ff6490ac39f92f77857e37055"
