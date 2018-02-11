#include <error.h>
#include <global.h>

// int main(int argc, char** argv)
// {
//     if(argc != 2)
//     {
//         WARN_STREAM("Usage: ./estimate_error ../config/compare.txt");
//         return 1;
//     }
//     
//     std::ifstream file;
//     std::string path;
//     path  = argv[1];
//     file.open(path.c_str());
//     std::string file_pc;
//     std::string file_arm;
//     if(!file.eof())
//     {
//         std::string s;
//         std::getline(file,s);
//         if(!s.empty())
//         {
//             std::stringstream ss;
//             ss<<s;
//             ss>>file_pc;
//             ss>>file_arm;
//         }
//         else
//         {
//             WARN_STREAM("compare.txt is empty");
//             return 1;   
//         }
//     }
//     std::vector<Point> point_pc;
//     std::vector<Point> point_arm;
//     int size_pc;
//     int size_arm;
//     load_data(file_pc, point_pc, size_pc);
//     load_data(file_arm, point_arm, size_arm);
//     if(size_arm != size_pc)
//     {
//         WARN_STREAM("check the number of point in file");
//         return 1;
//     }
//     double dis_total;
//     double max_erro(0.0);
//     double min_erro(100.0);
//     for(int i=0; i<size_arm; ++i)
//     {
//         if(point_arm[i].x ==0 &&  point_arm[i].y == 0 && point_arm[i].z == 0 
// 	   && point_pc[i].x ==0 && point_pc[i].y == 0 && point_pc[i].z == 0)
//            continue;
//         double dis;
//         dis = calculate(point_arm[i],point_pc[i]);
//         dis_total += dis;
//         if(dis >= max_erro)
//            max_erro = dis;
//         if(dis <= min_erro)
//            min_erro = dis;
//     }
//     INFO_STREAM("average error: "<<dis_total/size_arm<<", max error: "<<max_erro<<", min error: "<<min_erro);
//     return 0;
// }

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        WARN_STREAM("Usage: ./estimate_error ../config/compare.txt");
        return 1;
    }
    std::vector<std::string> data;
    std::ifstream file;
    std::string path = argv[1];
    file.open(path.c_str());
    while(!file.eof())
    {
        std::string s;
        std::getline(file,s);
	std::stringstream ss;
        ss<<s;
	std::string sss;
        ss>>sss;
	data.push_back(sss);	
	std::cout<<sss<<" "<<sss<<".jpg"<<std::endl;
    }
    return 0;
}
//     std::string file = argv[1];
//     std::ifstream f;
//     f.open(file.c_str());
//     while(!f.eof())
//     {
//         std::string s;
//         std::getline(f,s);
// 	std::stringstream ss;
//         ss<<s;
// 	std::string sss;
//         ss>>sss;
//         data.push_back(sss);
//     }
//     std::cout<<"data size "<<data.size()<<std::endl;