
Debian
====================
This directory contains files used to package bitcornd/bitcorn-qt
for Debian-based Linux systems. If you compile bitcornd/bitcorn-qt yourself, there are some useful files here.

## bitcorn: URI support ##


bitcorn-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcorn-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcornqt binary to `/usr/bin`
and the `../../share/pixmaps/bitcorn128.png` to `/usr/share/pixmaps`

bitcorn-qt.protocol (KDE)

