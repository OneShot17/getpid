# Maintainer: Stephen Brimhall <stephen.brimhall@gmail.com>

pkgname="getpid"
pkgdesc="Prints the PID of the calling process."
pkgver=1
pkgrel=1
arch=(any)
url="https://github.com/oneshot17/getpid.git"
source=("https://github.com/OneShot17/getpid/archive/1.tar.gz")
md5sums=('6f61c7aa64b69ae95b44bd2f70e51adb')

function build() {
    cd getpid-1
    make getpid
}

function package() {

    mkdir $pkgdir/usr
    mkdir $pkgdir/usr/bin
    cp getpid-1/getpid $pkgdir/usr/bin/
    
    return
}
