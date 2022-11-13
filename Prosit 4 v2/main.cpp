#include <iostream>
#include "emetteur.h"
int main() {
    emetteur em(11);


    recepteur test(1);

    em.signal("oui",11);
    em.signal("pd",14);
    em.signal("test",14);
    em.signal("putin",11);
    test.lecture(11);
    return 0;
}
