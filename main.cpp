#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int n; //количество вершин

int main() {
//структура координат вершин

    struct tops {
        int x;
        int y;
    };

    tops tops[15];

    tops[0].x = 405;
    tops[0].y = 50;
    tops[1].x = 555;
    tops[1].y = 50;
    tops[2].x = 140;
    tops[2].y = 120;
    tops[3].x = 860;
    tops[3].y = 120;
    tops[4].x = 140;
    tops[4].y = 285;
    tops[5].x = 860;
    tops[5].y = 285;
    tops[6].x = 360;
    tops[6].y = 340;
    tops[7].x = 600;
    tops[7].y = 340;
    tops[8].x = 300;
    tops[8].y = 520;
    tops[9].x = 700;
    tops[9].y = 530;
    tops[10].x = 50;
    tops[10].y = 420;
    tops[11].x = 950;
    tops[11].y = 420;
    tops[12].x = 50;
    tops[12].y = 590;
    tops[13].x = 950;
    tops[13].y = 590;
    tops[14].x = 500;
    tops[14].y = 690;


    int st; // стратовая вершина

    cout << "Amount of tops(6,9,12,15):";
    cin >> n;
    //проверка на верное количество вершин
    while (!(n == 6 || n == 9 || n == 12 || n == 15)) {
        cout << "Change number ";
        cin >> n;
    }

    cout << "Start top:";
    cin >> st;

    int w[n][n]; //матрица весов
    int h; //высота svg изображения

    //матрицы весов
    switch (n) {

        case 6: {

            int w1[6][6] = {{-1, -1, 3,  -1, 2,  -1},
                            {5,  -1, 2,  -1, -1, -1},
                            {-1, -1, -1, 7,  -1, -1},
                            {-1, -1, -1, -1, -1, 4},
                            {-1, 9,  -1, -1, -1, -1},
                            {-1, 6,  -1, -1, -1, -1}};
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    w[i][j] = w1[i][j];
                h = 350;
            }
            break;
        }

        case 9: {


            const int w2[9][9] = {{-1, -1, 3,  -1, -1, -1, -1, 4,  -1},
                                  {5,  -1, 2,  -1, -1, -1, -1, -1, -1},
                                  {-1, -1, -1, -1, -1, -1, 7,  -1, -1},
                                  {-1, -1, 10, -1, -1, -1, -1, -1, -1},
                                  {-1, -1, -1, 8,  -1, 13, -1, -1, -1},
                                  {-1, -1, -1, -1, -1, -1, 17, -1, -1},
                                  {-1, -1, -1, -1, -1, -1, -1, -1, 12},
                                  {-1, 19, -1, -1, 15, -1, -1, -1, -1},
                                  {-1, 6,  -1, -1, -1, -1, -1, -1, -1}};
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    w[i][j] = w2[i][j];
                h = 600;
            }

            break;
        }
        case 12: {
            const int w3[12][12] = {{-1, -1, 3,  -1, -1, -1, -1, 4,  -1, -1, -1, -1},
                                    {5,  -1, 2,  -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1, -1, -1, -1, -1, -1, 7,  -1, -1, -1, -1, -1},
                                    {-1, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1, -1, -1, 8,  -1, 13, -1, -1, -1, -1, -1, -1},
                                    {-1, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1},
                                    {-1, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1},
                                    {-1, 19, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1},
                                    {-1, 6,  -1, -1, -1, -1, -1, -1, -1, 20, -1, -1},
                                    {-1, -1, -1, -1, -1, -1, 21, -1, -1, -1, -1, 25},
                                    {-1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1},
                                    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 26, -1}};
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    w[i][j] = w3[i][j];
                h = 600;
            }

            break;
        }
        case 15: {
            const int w4[15][15] = {{-1,  -1, 3,  -1, -1, -1, -1, 4,  -1, -1, -1, -1, -1, -1, -1},
                                    {5,   -1, 2,  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, 7,  -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1,  -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, 30, -1, -1},
                                    {-1,  -1, -1, 8,  -1, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1},
                                    {-1,  19, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {-1,  6,  -1, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, 21, -1, -1, -1, -1, 25, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1},
                                    {-1,  -1, -1, -1, -1, -1, -1, -1, -1, -1, 26, -1, -1, -1, 35},
                                    {-1,  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, -1},
                                    {-1,  -1, -1, -1, 33, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
                                    {100, -1, -1, -1, -1, -1, -1, -1, -1, 7,  -1, -1, -1, 6,  -1}};
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    w[i][j] = w4[i][j];
                h = 750;
            }

            break;
        }
    }

    ofstream file("output.html");


    //Дейкстра
    bool visited[n]; //массив посещенных вершин
    int D[n]; // массив значений путей
    for (int i = 0; i < n; i++) {
        D[i] = INT_MAX;
        visited[i] = false;
    }
    D[st - 1] = 0;
    int index = 0;


    file << "<html><body>";

    for (int i = 0; i < n; i++) {
        int min = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && D[j] < min) {
                min = D[j];
                index = j;
            }
        }
//svg пошаговый вывод
        file << "<svg height=\"" << h
             << "\" width=\"1000\"><defs> <marker id=\"arrowhead\" markerWidth=\"7\" markerHeight=\"7\" refX=\"0\" refY=\"3.5\" orient=\"auto\"> <polygon points=\"0 0, 5 3.5, 0 7\" /> </marker> </defs>";

        for (int k = 0; k < n; k++) {
            for (int l = 0; l < n; l++) {

                int x_rib = abs(tops[l].x - tops[k].x); //длины катетов
                int y_rib = abs(tops[l].y - tops[k].y);

                double x_ch = x_rib / (sqrt(pow((tops[l].x - tops[k].x), 2) + pow((tops[l].y - tops[k].y), 2))); //вычисление координат соприкосновения дуги и вершины
                double y_ch = y_rib / (sqrt(pow((tops[l].x - tops[k].x), 2) + pow((tops[l].y - tops[k].y), 2)));
                int r = 29;//радиус вершины

                if (w[k][l] != -1) {

                    if (tops[k].x < tops[l].x) {
                        x_ch *= -1;
                        x_rib *= -1;
                    }

                    if (tops[k].y < tops[l].y) {
                        y_ch *= -1;
                        y_rib *= -1;
                    }

                    file << "<line x1=\"" << tops[k].x << "\" y1=\"" << tops[k].y << "\" x2=\""
                         << tops[l].x + x_ch * r
                         << "\" y2=\"" << tops[l].y + y_ch * r
                         << "\" style=\"stroke:black;stroke-width:2\" marker-end=\"url(#arrowhead)\" />";

                    file << "<circle cx=\"" << tops[k].x - 0.24 * x_rib << "\" cy=\"" << tops[k].y - 0.24 * y_rib
                         << "\" r=\"12\" fill=\"green\"/>";
                    file << "<text x=\"" << tops[k].x - 0.24 * x_rib - 10 << "\" y=\""
                         << tops[k].y - 0.24 * y_rib + 6 << "\" font-size=\"22\">" << w[k][l] << "</text>";
                }
            }
            file << " <circle cx=\"" << tops[k].x << "\" cy=\"" << tops[k].y
                 << "\" r=\"20\" stroke=\"black\" stroke-width=\"3\" fill=\"white\"/>";
            if (D[k] != INT_MAX) {
                file << "<text x=\"" << tops[k].x - 17 << "\" y=\"" << tops[k].y + 5 << "\" font-size=\"24\">" << D[k]
                     << "</text>";
            }
        }
        file << "</svg>";


        visited[index] = true;
        for (int j = 0; j < n; j++) {

            if (!visited[j] && (w[index][j] >= 0) && (D[index] + w[index][j] < D[j])) {
                D[j] = D[index] + w[index][j];

            }
        }
    }

    file << "</body></html>";

    //Вывод
    cout << "result:\t\n";
    for (int i = 0; i < n; i++) {
        if (i != st - 1) cout << st << " -> " << i + 1 << " = " << D[i] << endl;
    }

    file.close();
    system("output.html");
}
