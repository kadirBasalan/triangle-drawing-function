#include <iostream.h>

void ucgenCiz(int yukseklik)
{
int i,j;

	for (i = 0; i < yukseklik; i++)
	{
			for (j = 0; j < yukseklik; j++)
			{
				if (j<=i)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
	cout<<endl;
	}
}

main()
{
  int giris;

  while (1)
  {
  cout<<"Lutfen bir sayi giriniz... "; cin>>giris;

  if (giris<=0)
  {
	cout<<"Girilen sayi 0'dan buyuk olmali.";
  }

  ucgenCiz(giris);
  }
}
