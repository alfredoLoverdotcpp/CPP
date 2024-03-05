double AreasofTheChoices(int ch, vector<double> a){
    double result = 0;
    switch(ch)
    {
        case 1: {
            if(a.size()<1)
            {
                cout << "Error, insufficient data for choice 1" << endl;
                break;
            }
            double r = a[0];
            result = M_PI*r*r;
            break;
        }
        case 2: {
            if(a.size()<2)
            {
                cout << "Error, insufficient data for choice 2" << endl;
                break;
            }
            double l = a[0];
            double b = a[1];
            result = l*b;
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return result;
}
