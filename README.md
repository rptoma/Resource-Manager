# Resource-Manager
Un Resource Manager ce are ca scop administrarea eficienta a memoriei. 

Clasa **resourceManager** este un **singleton** ce contine un **map** de nume de resurse asociate cu pointeri catre resursele respective. 

In cazul unui scenariu in care mai multe obiecte folosesc aceeasi resursa (precum obiectele de tip *tree*, ce folosesc aceleasi imagini si sunete), ele au optiunea de a apela la Resource Manager prin metoda **getResource** pentru a le oferi un pointer catre resursa respectiva (ce a fost anterior adaugata in Resource Manager prin **addResource**). Astfel, se evita umplerea memoriei cu aceeasi resursa de catre fiecare obiect.

Resursele (de exemplu, **image** si **sound**) trebuie sa mosteneasca clasa **resource**. Atunci cand un obiect are nevoie de o resursa, acesta va face un **dynamic_cast** la tipul de clasa de care are nevoie pentru a putea fi utilizabila resursa.

La rulare, se poate observa ca, in ciuda faptului ca, mai multi copaci folosesc aceleasi resurse, adresele de memorie ale resurselor sunt identice.
