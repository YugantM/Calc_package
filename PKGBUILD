pkgname=calc
pkgver=0.0.1
pkgrel=1
pkgdesc="it can do addition and multiplication"
arch=('any')
url="https://github.com/YugantM/Calc_package"
license=('GPLv2')
#depends=('')
makedepends=('cmake' 'git')
#_dir=${pkgname}
source=("https://github.com/YugantM/Calc_package.git")
md5sums=('SKIP')

build() {
  # Create build directory
  [ -d build ] || mkdir build
  cd build

  cmake ${srcdir}/$pkgname \
  -DCMAKE_INSTALL_PREFIX=/usr 
  make 
}

package() {
   cd "build"
   make DESTDIR="$pkgdir/" install
}