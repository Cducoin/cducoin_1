Cducoin Core
=============

Setup
---------------------
Cducoin Core is the original Cducoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Cducoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Cducoin Core, visit [cducoincore.org](https://cducoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Cducoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/cducoin-qt` (GUI) or
- `bin/cducoind` (headless)

### Windows

Unpack the files into a directory, and then run cducoin-qt.exe.

### macOS

Drag Cducoin Core to your applications folder, and then run Cducoin Core.

### Need Help?

* See the documentation at the [Cducoin Wiki](https://en.cducoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [Cducoin StackExchange](https://cducoin.stackexchange.com).
* Ask for help on #cducoin on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#cducoin).
* Ask for help on the [CducoinTalk](https://cducointalk.org/) forums, in the [Technical Support board](https://cducointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Cducoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/cducoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Cducoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.cducoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [CducoinTalk](https://cducointalk.org/) forums, in the [Development & Technical Discussion board](https://cducointalk.org/index.php?board=6.0).
* Discuss project-specific development on #cducoin-core-dev on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#cducoin-core-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [cducoin.conf Configuration File](cducoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
