#include <stdio.h>

int main()
{
    double jamKerja, tarifPerJam, totalGaji = 0;

    printf("Masukkan jumlah jam kerja selama seminggu: ");
    scanf("%lf", &jamKerja);

    printf("Masukkan tarif per jam (contoh: 100000): ");
    scanf("%lf", &tarifPerJam);

    if (jamKerja > 40)
    {
        double lembur = jamKerja - 40;
        totalGaji = (40 * tarifPerJam) + (lembur * tarifPerJam * 1.5);
    }
    else
    {
        totalGaji = jamKerja * tarifPerJam;
    }

    printf("Total gaji karyawan adalah: %.0f\n", totalGaji);

    return 0;
}
