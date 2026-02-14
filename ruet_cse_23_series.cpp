#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

#define TOTAL 181

void binary_search(pair<string,int> p[] , int key){
    int i = 0;
    int j = TOTAL - 1;
    int mid;
    bool flag = false;

    while(i<=j){
        mid = (i+j)/2;

        if(p[mid].second == key){
            flag = true;
            break;
        }
        else if(p[mid].second < key){
            i = mid + 1;
        }
        else if(p[mid].second > key){
            j = mid - 1;
        }
    }

    if(flag){
        cout << "Name : " << p[mid].first << "\nRoll No : " << p[mid].second << endl;
    }
    else{
        cout << "Sorry! We are unable to find" << endl;
    }
}

void name_search(pair<string,int> p[] , string s){

    bool flag = false;
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    int i;

    for( i = 0; i<TOTAL ; i++){

        string name = p[i].first;
        if(name == s){
            cout << "Name : " << p[i].first << "\nRoll No : " << p[i].second << endl;        
            flag = true;
            break;
        }
        stringstream ss(name);
        string word;
        while(ss >> word){
            if(s == word){
                cout << "Name : " << p[i].first << "\nRoll No : " << p[i].second << endl;                
                flag = true;
                break;
            }
        }
    }

    if(!flag)
        cout << "Sorry! We are unable to find" << endl;        
    
}

int main(){

    pair<string, int> student[TOTAL] = {
    {"MD MOON BABU", 2303001},
    {"MD. AZMAIN AHNAF", 2303002},
    {"MD. SAROUR JAHAN", 2303003},
    {"JARIF MUSTAVI AABIR", 2303004},
    {"MD. SHAWAL ISLAM", 2303005},
    {"MD.SABA AL SIYAM", 2303006},
    {"MEHRIN NASA MOM", 2303008},
    {"MD. ARAFAT RAHMAN SOHAN", 2303009},
    {"SANCHITA GHOSH", 2303010},
    {"MD. FARHAN MASUD", 2303011},
    {"MD. RIFAT SANJID DIPRO", 2303012},
    {"MD ASIF FAISAL PALASH", 2303013},
    {"MD. MOSHIUR RAHMAN MUSHFIQUE", 2303014},
    {"KAIF RAHMAN", 2303015},
    {"SIFATUNNABI SIAM", 2303016},
    {"MALIHA ZAMAN", 2303017},
    {"MD. NIBIR SHAHRIAR", 2303018},
    {"MD. FUAD HASAN TASIN", 2303019},
    {"SHEIKH SHAKIB BIN SHOFIQ BORSHON", 2303020},
    {"AKASH KUMAR AGARWALA", 2303021},
    {"S. M. EFTAKHARUL ALAM", 2303022},
    {"ISHTIAQUE AHMED", 2303023},
    {"MD.RAIYAN BIN RAFIQUE", 2303024},
    {"PREETOM BARMON", 2303025},
    {"BRITTIC ROY BRINTO", 2303026},
    {"SABBIR AHMED OMI", 2303027},
    {"SAMIUL ISLAM SIFAT", 2303028},
    {"MST SHAHRIMA KHATUN", 2303029},
    {"DIPANNITA BISWAS", 2303030},
    {"MOST.MUINA WAZIHAH MURSONA", 2303031},
    {"MD ZULKERNINE", 2303032},
    {"MOSTAFIZUR RAHMAN", 2303033},
    {"MD. RIJUN ISLAM NEON", 2303034},
    {"S. M. Mahin Asif", 2303035},
    {"MD. MEHEDI HASAN", 2303036},
    {"MD. RAKIBUL HASAN RAYHAN", 2303037},
    {"MD. ARAFAT RAHMAN", 2303038},
    {"SHOISHOB ISLAM", 2303039},
    {"RIYAD BIN AZIZ", 2303040},
    {"MD. MARAJUL ISLAM", 2303041},
    {"RAYAN BINTAY MOSTAFA OMI", 2303042},
    {"MOHAMMAD INZAMUL ISLAM", 2303043},
    {"MD. MUHTASIM ALAM", 2303044},
    {"RAIYAN MUBASHSHIRA RAHMAN", 2303045},
    {"MD.YAFEE ISLAM", 2303046},
    {"IBNAY SUFIAN MOHAMMOD TASIN", 2303047},
    {"FAHIM AHMED UTSHO", 2303048},
    {"MD SAIKOT ISLAM", 2303049},
    {"NOMAN AL SABID", 2303050},
    {"SK RAFIU ISLAM ZIDAN", 2303051},
    {"MD.LABIB HASSAN", 2303052},
    {"JEBA RAISA", 2303053},
    {"SYMA HOSSAIN", 2303054},
    {"FAHIM RAHMAN", 2303055},
    {"PRIASHIS GHOSH", 2303056},
    {"SHAHI RAJA LASHKOR", 2303057},
    {"MD.ATIK SHAHRIAR", 2303058},
    {"A.K.M ASIMUL ALAM", 2303059},
    {"MD. SAZZAD HOSSAIN", 2303060},
    {"S M SALMAN", 2303061},
    {"MD. MAKSUMUL HAQUE", 2303062},
    {"PRANSHU PRODIPTA NAG", 2303063},
    {"AKIB SWALEHIN AYDED", 2303064},
    {"MD. ABU SADAT SIAM", 2303065},
    {"SABRIA SARA", 2303066},
    {"MAHADI HASSAN", 2303068},
    {"MD. MANSUR ASWAD HOSSAIN PABAN", 2303069},
    {"SAFAT AL ABID", 2303070},
    {"RUPANTOR KARTIK ROY", 2303071},
    {"MD. MASUM PERVEJ", 2303073},
    {"SANZIDUL ISLAM SIAM", 2303074},
    {"CHOWDHURY ROUNAK JAHAN BUSHRA", 2303075},
    {"TANMOY HOWLADER", 2303076},
    {"SOUMITRO CHANDRO DASH", 2303077},
    {"NAFEES SHADMAN", 2303078},
    {"NOSIN TABASSUM", 2303079},
    {"AVIJIT CHAKRABORTY", 2303080},
    {"MST.TONDRA RAHMAN", 2303081},
    {"MD. ARIQUE AHSAN", 2303082},
    {"SIFAT AREFIN", 2303083},
    {"MD. TAUHIDUL ISLAM CHOWDHURY", 2303084},
    {"MD.SHAHRIER ISLAM ALIF", 2303085},
    {"MD. THAMID HASAN RAKIN", 2303086},
    {"TASMI TABASSUM", 2303087},
    {"MIS. JANNATUN FIRDAUS APORNA", 2303088},
    {"MD. SHAHAB UDDWLA", 2303089},
    {"TAMIM AHMED UDOY", 2303091},
    {"TAMIM IQBAL", 2303093},
    {"MOHAMMED ENAYET HUSSAIN", 2303094},
    {"TASFIA TAHSIN", 2303095},
    {"MD. TUSAR IMRAN", 2303096},
    {"SNEHANGSHU ROY", 2303097},
    {"RAYMA ANJUM BENTE REZA", 2303098},
    {"SHEIKH MD. SHAHRIA", 2303099},
    {"MD. MASHFIK HASAN RAFI", 2303100},
    {"ARCHITA BISWAS", 2303101},
    {"AFIA NAYEL ZEREEN", 2303102},
    {"MAHIR DIAN AHMED", 2303103},
    {"MD. NURA NAFIZ RAHMAN", 2303104},
    {"MD. ESTIAQ SADIK RUDRO", 2303105},
    {"JANNATUL JAKIA OHI", 2303106},
    {"MD.RAZWAN BIN HAMID", 2303107},
    {"MD. RIDOWAN AHMED", 2303108},
    {"IMRANUL ISLAM", 2303109},
    {"M.IMTIAZ FUAD", 2303110},
    {"MD. ASADUL ISLAM", 2303111},
    {"MD. IMRAN HASAN", 2303112},
    {"SAMIA AKTER", 2303113},
    {"MD. SAYEM SIKDER", 2303114},
    {"MD.OMOR FARUK", 2303115},
    {"LIVEN RAHMAN", 2303116},
    {"MD.ABID SHARKAR", 2303117},
    {"NAFIS FUWAD", 2303118},
    {"MD AFRAZUR RAHMAN", 2303119},
    {"ABIR HASAN NAFIS", 2303120},
    {"A.S.M. ABIDUR RAHMAN", 2303121},
    {"MASHRAFI ABDULLAH FARAZI", 2303122},
    {"MD. SAMIUL ALAM TA-SEEN", 2303123},
    {"M AHADUZZAMAN CHOWDHURY", 2303124},
    {"BIDHAN SHAHA DHRUBO", 2303125},
    {"ETHIKA DAS ORIN", 2303126},
    {"MRM MUBASHSHIRUL HAQUE", 2303127},
    {"TAKIA SHARLEEN PRACHI", 2303128},
    {"RAFID SIDDIQUE", 2303129},
    {"MD. RUHAN HOSSAIN", 2303130},
    {"TASNIMUL ISLAM AFIF", 2303131},
    {"MD ZAHIDUL ISLAM", 2303132},
    {"TAHSAN UDDIN", 2303133},
    {"ABIR AHMED ARPON", 2303134},
    {"FOYSAL SHEIKH MARUF", 2303135},
    {"NAZMUS SAKIB NILOY", 2303136},
    {"TAIEB MAHMUD RAFIN", 2303137},
    {"ALINDO GHOSH", 2303138},
    {"AFIA MAHMUDA", 2303139},
    {"MD. MUBARRAT HOSSAIN CHOWDHURY", 2303140},
    {"MIHRUB AZIZ BHUIYAN", 2303141},
    {"OISHE PAL", 2303142},
    {"MD. SIAM ULL ISLAM", 2303143},
    {"SHAHRAJ ISLAM SWASCHO", 2303144},
    {"ARNOB PAL", 2303145},
    {"TARIM SUNNY", 2303146},
    {"SHIHABUZZAMAN", 2303147},
    {"REFAYET HOSSAIN ANANDA", 2303148},
    {"MD. FARHAN SADIK", 2303149},
    {"SAADMAN SAIF", 2303150},
    {"SOAHG MONDAL", 2303151},
    {"MD. INKIAD HASAN", 2303152},
    {"MD. ISMAIL SHIHAB", 2303153},
    {"MD MUSFIQ HASAN", 2303154},
    {"TANZIKA TANISHA", 2303155},
    {"MD SAMIUL HAQUE AKIB", 2303156},
    {"MD. RAHMAT ALI", 2303157},
    {"PRATIK KHA", 2303158},
    {"MD.MEHRAB HOSSAIN", 2303159},
    {"MD JEBON SHEIKH", 2303160},
    {"AMARTO MANI", 2303161},
    {"MD MOSTAK SAHARIAR SADIT", 2303162},
    {"SAMIHA FARHAT FIZA", 2303163},
    {"MD. AHNAF RASHID RODDRO", 2303164},
    {"PRITHI BISWAS PUJA", 2303165},
    {"S. M. SHAHRIAR HOSSAIN", 2303166},
    {"NAFIZA TASNIM", 2303167},
    {"A. M. MUFAKHKHAR TAHMID CHOTON", 2303168},
    {"SALSABIL MOHONA", 2303169},
    {"MD KAYSAR MAHMUD", 2303170},
    {"MD NAIMUL ISLAM NAIM", 2303171},
    {"NABIL ABRAR", 2303172},
    {"EMON DATTA", 2303173},
    {"MD. NAFIS SADOT", 2303174},
    {"LIPI ROY", 2303175},
    {"MD. EMDADUL HAQUE SAGOR", 2303176},
    {"NELOY NANDI", 2303177},
    {"MD MUSTAQIM RAGIB", 2303178},
    {"MD MASFIE AMIN SRIJON", 2303179},
    {"NAFIS ISLAM KABBO", 2303180},
    {"ANINDO CHAMA", 2303181}
};

    cout << "Do you want to Search by Roll Number? (Y/N) : ";
    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        ch-=32;
    }

    switch(ch){
        case 'Y':{
            cout << "Enter Roll Number : ";
            int roll;
            cin >> roll;
            binary_search(student,roll);
            break;
        }
        case 'N':{
            cin.ignore();
            cout << "Enter Name : ";
            string name;
            getline(cin,name);
            name_search(student,name);
            break;
        }
        default:
            cout << "Invaild! Please Try Again....\n";
        }


    return 0;
}