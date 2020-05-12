pkgname=calc
pkgver=1.0
pkgrel=1
pkgdesc=""
arch=("any")
url=""
license=('GPL')
source=("https://github.com/YugantM/Calc_package.git")
noextract=()
#md5sums=() #autofill using updpkgsums

build() {

  ./configure --prefix=/usr
  cmake
}

package() {
  cd "$pkgname-$pkgver"

  make DESTDIR="$pkgdir/" install
}