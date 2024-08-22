#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void body()
{
    char ip[255];
    printf("Content-type:text/html\n\n");
    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"en\" style=\"height: 125%%;\">\n");
    printf("<head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
    printf("    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n");
    printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    printf("    <title>Inscription</title>\n");

    printf("<style>\n");
    printf("    a{\n");
    printf("        margin-left: 20px;\n");
    printf("        font-size: 30px;\n");
    printf("        text-decoration: none;\n");
    printf("        color: inherit;\n");
    printf("    }\n");
    printf("    .box {\n");
    printf("        position: absolute;\n");
    printf("        top: 60%%;\n");
    printf("        left: 50%%;\n");
    printf("        width: 600px;\n");
    printf("        padding: 40px;\n");
    printf("        transform: translate(-50%%,-50%%);\n");
    printf("        background: linear-gradient(50deg,black,#606060);\n");
    printf("        backdrop-filter: blur(50px);");
    printf("        box-sizing: border-box;\n");
    printf("        box-shadow: 10px 40px 50px rgba(0,0,50,50);\n");
    printf("        border-radius: 40px;\n");
    printf("        margin-bottom: 50px;\n");
    printf("    }\n");

    printf("    .box .user-box {\n");
    printf("        position: relative;\n");
    printf("    }\n");

    printf("    .nav .theme {\n");
    printf("        display: inline-block;\n");
    printf("        background: linear-gradient(to left, rgb(255,0,0), rgb(121,121,244));\n");
    printf("        background-clip: text;\n");
    printf("        -webkit-background-clip: text;\n");
    printf("        -webkit-text-fill-color: transparent;\n");
    printf("        font-size: 50px;\n");
    printf("    }\n");
    printf("    .box .user-box input {\n");
    printf("        width: 100%%;\n");
    printf("        padding: 10px 0;\n");
    printf("        font-size: 16px;\n");
    printf("        color: #fff;\n");
    printf("        margin-bottom: 30px;\n");
    printf("        border: none;\n");
    printf("        border-bottom: 1px solid #fff;\n");
    printf("        outline: none;\n");
    printf("        background: transparent;\n");
    printf("    }\n");

    printf("    .box .user-box label {\n");
    printf("        position: absolute;\n");
    printf("        top: 0;\n");
    printf("        left: 0;\n");
    printf("        padding: 10px 0;\n");
    printf("        font-size: 16px;\n");
    printf("        color: #fff;\n");
    printf("        pointer-events: none;\n");
    printf("        transition: .5s;\n");
    printf("    }\n");

    printf("    .box .user-box input:focus ~ label,\n");
    printf("    .box .user-box input:valid ~ label {\n");
    printf("        top: -30px;\n");
    printf("        left: 0;\n");
    printf("        color: #ffffff;\n");
    printf("        font-weight: 1000;\n");
    printf("        font-size: 16px;\n");
    printf("    }\n");
    printf("    .nav {\n");
    printf("        background-color: #eeeeee;\n");
    printf("    }\n");
    printf("    .box .sub{\n");
    printf("        position: relative;\n");
    printf("        display: inline-block;\n");
    printf("        padding: 10px 20px;\n");
    printf("        color: black;\n");
    printf("        overflow: hidden;\n");
    printf("        transition: .5s;\n");
    printf("        margin-top: 40px;\n");
    printf("    }\n");
    printf("    .box .sub:hover {\n");
    printf("        background: #03f40f;\n");
    printf("        color: white;\n");
    printf("        border-radius: 20px;\n");
    printf("        box-shadow: 0 0 5px #03f40f, 0 0 25px #03f40f, 0 0 50px #03f40f, 0 0 100px #03f40f;\n");
    printf("    }\n");
    printf("    .box .sub span { \n");
    printf("        position: absolute;\n");
    printf("        display: block;\n");
    printf("    }\n");

    printf("    @keyframes bt-anim1 {\n");
    printf("        0%% {\n");
    printf("            left: -100%%;\n");
    printf("        }\n");
    printf("        50%%, 100%% {\n");
    printf("            left: 100%%;\n");
    printf("        }\n");
    printf("    }\n");
    printf("    \n");
    printf("</style>\n");
    printf("</head>\n");

    printf("<body style=\"font-family:arial; margin: 0;background: linear-gradient(50deg,blue,red); height: 100%% ;background-size: cover; background-repeat: no-repeat;\">\n");
    printf("    <div class=\"nav\">\n");
    printf("        <center><h1 class=\"theme\"><b>Adresse IP</b><h1/></center><br><br>\n");
    printf("    </div>\n");
    printf("    <div class=\"box\">\n");
    printf("        <form action=\"bin.cgi\" method=\"GET\">\n");
    //Addresse ip 
    printf("            <div class=\"user-box\">\n");
    printf("                <input type=\"text\" name=\"ip\" value=\"%s\" required>\n", ip);
    printf("                <label>Entreé l'adresse IP pour verifier sa classe</label>\n");
    printf("            </div>\n");

    // Bouton d'envoi
    printf("            <center>\n");
    printf("                    <input class=\"sub\" type=\"submit\" value=\"Verifier classe\" style=\"padding: 20px;\" style=\"margin-top: -50px;\"/>\n");
    printf("            </center>\n");

    printf("        </form>\n");
    printf("    </div>\n");
    printf("            <br><br>\n");
    printf("</body>\n");
    printf("</html>\n");
}

int main()
{
    body();
    return 0;
}