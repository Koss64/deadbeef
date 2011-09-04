# DeaDBeeF - Ultimate Music Player For GNU/Linux

http://deadbeef.sourceforge.net/

DeaDBeeF (as in 0xDEADBEEF) is an audio player for GNU/Linux, BSD, OpenSolaris and probably other UNIX-like systems.
It is mainly written by Alexey Yakovenko, with contributions from a lot of different people (see about box in the player for more details).
It is distributed under the terms of GNU General Public License version 2.
See http://deadbeef.sourceforge.net/about.html for a list of features.

**Warning: this is a fork from the official project.**


## TABLE OF CONTENTS

1. compiling, dependencies, etc
2. information for distributors


## Compiling, dependencies, etc

* First you need to install dependencies. full list is provided at the end of this section for your convenience

* You will need intltool to be installed. if you don't need translations -- run `./configure --disable-nls` (in this case you won't need to install intltool)

* If you want to build from git - install autotools, and run `./autogen.sh` to bootstrap

* Run `./configure --help`, and read it.

* Now you're ready to configure the build process -- run `./configure --prefix=/usr`, and wait until it finishes. you may want to change prefix to another value. consult INSTALL file for more info.

* Make sure all plugins which you want have "Yes" status in the list that's printed by configure. if not -- install missing dependencies, and rerun configure. that is especially important for GTKUI, and ALSA or OSS plugins. make sure you have both. otherwise you won't get GUI and/or sound output.

* After satisfying all dependencies, run `make -j5` (change -j number to suit your number of CPUs/cores, e.g. 5 is quite good for single CPU dual-core machines). it is a good idea to do it as normal user (this step doesn't require root privileges).

* After build finishes, run `make install` as root

### Full list of dependencies:

    libsamplerate: for dsp_libsrc plugin (resampler)
    gtk+-2.0 >= 2.12 (+ gthread, + glib): GTK+ 2.0 user interface
    alsa-lib: ALSA support
    libvorbis and libogg: for ogg vorbis plugin
    libcurl >= 7.10: for last.fm, vfs_curl (shoutcast/icecast), artwork plugins
    imlib2: for artwork plugin; see libjpeg and libpng below
    libjpeg and libpng: for artwork plugin (when imlib2 is not installed, or --disable-artwork-imlib2 is used)
    libmad: for mp3 plugin (mpeg1,2 layers1,2,3)
    libFLAC: for flac plugin
    wavpack: for wavpack plugin
    libsndfile: for sndfile plugin
    libcdio + libcddb: for cd audio plugin
    ffmpeg (libavcodec + libavformat): for ffmpeg plugin
    xlib: for global hotkeys
    dbus: for notification daemon support (OSD current song notifications)
    pulseaudio: for PulseAudio output plugin
    faad2: for AAC plugin
    zlib: for Audio Overload plugin (psf, psf2, etc), GME (for vgz)
    libzip: for vfs_zip plugin

Actual package names for your Linux distribution may vary.


## Information for distributors

The Deadbeef player code is licensed under GPLv2, but this is not a requirement for plugins.

Plugins don't link directly to deadbeef code, but are using special API header file which uses ZLib license.

