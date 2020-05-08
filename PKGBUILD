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
source=("./src/")
md5sums=('SKIP')

build() {
  # Create build directory
  [ -d ${srcdir}/build ] || mkdir ${srcdir}/build
  cd ${srcdir}/build

  cmake ${srcdir}/$pkgname \
        -DCMAKE_INSTALL_PREFIX=/usr 
  make 
}

package() {
   cd "${srcdir}/build"
   make DESTDIR="$pkgdir/" install
}