import os
import glob

    # with open('main.c', 'r') as file :
    #   filedata = file.read()




    # for filename in glob.glob('*.txt'):
    #     temp = []
    #     with open(os.path.join(os.getcwd(), filename), 'r') as f:
    #         for readline in f:
    #             for str in readline.split():
    #                 temp.append(str)
    #     kvec.append(temp)

filedata =""
kvec = []

file = open("/mnt/e/Systems/STADS/Electrical/Puja/scripts/kvec_FOV10.csv", "r")
for j in file.readlines():
    for k in j.split():
        kvec.append(k)

filedata = "#include \"constants.h\"\n" 
K_vec ="{"
for j in range(len(kvec)):
    K_vec +="{"
    K_vec+=kvec[j]+"},\n"
    
# K_vec =UIS.rstrip(UIS[-1])
K_vec+="}"
filedata+=f'int sm_K_vec_arr[N_KVEC_PAIRS][3]={K_vec};\n'
UISname = f'sm_K_vec_arr.h'
with open(UISname, 'w') as file :
    file.write(filedata)
#try:
#    os.system('touch -m main.c')

