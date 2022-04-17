#include "functions.h"
#include "file.h"
void File()
{
    list <Studentas> sar;
    
    try
    {
        std::ifstream fd("kursiokai.txt");
        if (fd.is_open())//pakeisti i fd
        {
            fd.peek();
            if (fd.eof())
            {
                cout << "kursiokai.txt egzistuoja, taciau failas yra tuscias" << endl;
                fd.close();
            }
            else
            {
                fd.close();
                read_file(sar);
                sar.sort(vardas_sort);
                isvestis_file(sar);
                sar.clear();
            }
        }
        else throw "Failas \"kursiokai.txt\" nerastas";
    }
    catch (char const* e)
    {
        cout << e << endl;
    }

}