#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void determineClasse()
{
    printf("Content-type:text/html\n\n");    
	printf("<html>\n");
	printf("    <head> <title> IP </title> </head>\n");
	printf("    <style> \n");
	printf("        .decoration {\n");
	printf("            border-radius:60px;\n");
	printf("            margin-left:80px; \n");
	printf("            margin-right:80px; \n");
	printf("            text-align: center; \n");
    printf("            box-shadow: 0px 0px 6px rgba(0,0,2,1);");
    printf("            margin-top: 70px;\n");
	printf("        }\n");
    printf("        .styles {\n");
    printf("            background: linear-gradient(to left, rgb(255,255,200), rgb(12,12,244));\n");
    printf("            background-clip: text;\n");
    printf("            -webkit-background-clip: text;\n");
    printf("            -webkit-text-fill-color: transparent;\n");
    printf("        }\n");
	printf("    </style>\n");
	printf("<body style=\"font-family: arial; background: linear-gradient(50deg,blue,red); background-size: cover;height: 100%%;\">");
	printf("<center><div class=\"decoration\"style=\"padding:50px; background: linear-gradient(50deg,black,#606060); color: white;\">\n");
    
    int a;
    int b;
    int c;
    int d;
    
    int count = 0;
    char *get = getenv("QUERY_STRING");
    if (sscanf(get,"ip=%d.%d.%d.%d",&a,&b,&c,&d) == 4)
    {
        char affiche[200] = "";
        int k;

        printf("<h1 class=\"styles\" style=\"font-size: 100px\"><b>%s\n</b></h1><br>\n",get);
        for(k = 0; k < strlen(get); k++)
        {
            if (get[k] == '.')
            {
                count++;
            }
        }
        if (count != 3)
        {
            printf("<p style=\"font-size: 50px\"><b>Ce n'est pas une Adresse IP</b></p>\n");
        }
        else if (count == 3)
        {
            if ( (a >= 0 && a <= 127 )&& (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP de classe A</b></p>\n");
            }
            else if ( (a >= 128 && a <= 191 )&& (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP de classe B</b></p>\n");
            }
            else if ( (a >= 192 && a <= 223 )&& (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP de classe C</b> </p>\n");
            }    
            else if ( (a >= 224 && a <= 239 )&& (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP de classe D</b></p>\n");
            }
            else if ( (a >= 240 && a <= 255 )&& (b >= 0 && b <= 255) && (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP de classe E</b></p>\n");
            }
            else 
            {
                printf("<p style=\"font-size: 50px\"><b>Adresse IP invalide</b></p>\n");
            }
        }
    }
    else
    {
          printf("<h1 class=\"styles\" style=\"font-size: 100px\"><b>%s\n</b></h1><br>\n",get);
          printf("<p style=\"font-size: 50px\"><b>ce n'est pas une Adresse IP </b></p>\n");
    } 
    printf("</div></center>\n");
    printf("</body>\n");
    printf("</html>\n");
}
int main()
{
    determineClasse();
    return (0);
}