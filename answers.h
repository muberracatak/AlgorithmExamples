using System;

namespace ConsoleApp1

{

    class Program
    {

          static void Main(int a, int us)

        {

            int sonuc = 1;
          Console.Write("Taban sayısı : ");
          a = Convert.ToInt32(Console.ReadLine());
          Console.Write("Kuvveti : ");
          us = Convert.ToInt32(Console.ReadLine());
          for (int i = 1; i <= us; i++)
            {
                sonuc = sonuc * a;
            }
            Console.WriteLine("Tabanı {0} ve kuvveti {1} olan sayının değeri = {2}", a, us, sonuc);
            Console.ReadLine();
        }
    }
    class Program2
    {
        static void Main()

        {
            Random rastgele = new Random();
            int[] array;
           array = new int[50];
            for (int i = 0; i < 50; i++)
            {
               int sayi = rastgele.Next(1, 50);
                Console.WriteLine(sayi.ToString());
                for (int a = 0; a < 50; a++)
                {
                    array[a] = sayi;
                }
            }
            array[0] = array[50];
        }
        class Program3
        {
            public static void Swap(int[] dizi, int a, int b)
            {
               foreach (int i in dizi)
                   //Console.WriteLine(i);
                    dizi[a] = dizi[b];
                dizi[b] = dizi[a];
            }
            static void Main()
            {
                int[] dizi = { 1, 2, 4, 7, 9, 8 };
                Swap(dizi, 0, 5);
                Console.WriteLine(dizi[0]);
                Console.WriteLine(dizi[5]);
            }

        }
        class Program4

        {

            public static void BubbleSort(int[] dizi, int a, int b)

            {
                Random rastgele = new Random();
                int[] array,gecici;
                array = new int[50];
                for (int i = 0; i <= dizi.Length - 1; i++)
                {
                    for (int j = 1; j <= dizi.Length - 1; j++)
                    {
                       if (dizi[j - 1] > dizi[j])
                        {
                           gecici = dizi[j - 1];
                            dizi[j - 1] = dizi[j];
                            dizi[j] = gecici;
                        }
                    }
                }
                Console.WriteLine("Dizinin Sıralı Hali");
                Console.ReadKey();

            }

        }

    }
}

