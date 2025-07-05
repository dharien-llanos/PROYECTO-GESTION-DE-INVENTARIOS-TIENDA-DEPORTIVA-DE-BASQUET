void mostrar_zapatillas(zapatillas arr[], int &n3)
{
    cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<n3; i++)
    {
        cout<<i+1<<"\t"\
        <<setw(15)<<arr[i].color<<"\t"\
        <<setw(15)<<arr[i].talla<<"\t"\
        <<setw(15)<<arr[i].marca<<"\t"\
        <<setw(15)<<arr[i].precio<<"\t"\
        <<setw(15)<<arr[i].cantidad<<endl;
    }
}

void mostrar_medias(medias arr[], int &n5)
{
    cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<n5; i++)
    {
        cout<<i+1<<"\t"\
        <<setw(15)<<arr[i].color<<"\t"\
        <<setw(15)<<arr[i].talla<<"\t"\
        <<setw(15)<<arr[i].marca<<"\t"\
        <<setw(15)<<arr[i].precio<<"\t"\
        <<setw(15)<<arr[i].cantidad<<endl;
    }
}