int main(){
    FILE *sort;
    char *cadenas[10];
    cadenas[0] = 'Hola';
    cadenas[1] = 'Otra';
    cadenas[2] = 'Ya';
    cadenas[3] = 'Fin';
    sort = popen('sort', 'w');
    for (int i = 0;i < 4; i++){
        fprint(sort, '%s', cadenas[1]);
    }
    pclose(sort);
}
