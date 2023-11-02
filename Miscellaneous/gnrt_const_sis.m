% 20 constellations
constellations = { 'Orion', 'Ursa Major', 'Taurus', 'Canis Major', 'Leo', 'Pegasus', 'Cygnus', 'Aquila', 'Sagittarius', 'Gemini', 'Scorpius', 'Virgo', 'Cassiopeia', 'Pisces', 'Aries', 'Hydra', 'Crux', 'Lyra', 'Perseus', 'Cepheus' };

% Right Ascension (RA) in degrees
RA_begin = [ 75, 120, 45, 90, 135, 315, 285, 270, 255, 90, 240, 165, 0, 0, 15, 120, 180, 270, 30, 315 ];
RA_end = [ 90, 225, 75, 120, 165, 345, 315, 300, 285, 120, 270, 225, 60, 45, 45, 225, 210, 285, 60, 45];
% Declination (Dec) in degrees
Dec_begin = [ -10, 30, 5, -30, 10, 5, 27, 0, -45, 20, -40, 15, 50, 5, 15, -35, -65, 30, 60, 50 ];
Dec_end = [-30, 90, 30, -30, 30, 25, 61, 20, -45, 35, -20, 15, 90, 30, 30, -35, -65, 40, 60, 70];
equi_space = 5

for iter_no = 1 : 20
    RA_deg = linspace(RA_begin(iter_no), RA_end(iter_no), equi_space);
    Dec_deg = linspace(Dec_begin(iter_no), Dec_end(iter_no), equi_space);
    const = constellations{iter_no}
    for eq = 1 : equi_space
        writematrix(RA_deg(eq),"D:\Github\STADS-MILS\STADS\OLS\SIS\Input and Constants\sis_in_bo.xlsx",'Range','B2');%write RA
        writematrix(Dec_deg(eq),"D:\Github\STADS-MILS\STADS\OLS\SIS\Input and Constants\sis_in_bo.xlsx",'Range','C2');%write dec
        
        run('D:\Github\STADS-MILS\STADS\OLS\SIS\Input and Constants\sis_gnrt_input_file.m');%run sis_gnrt_input file
        %a = index;
        mkdir(strcat('D:\IITBSSP\FOV_13\Constellations\',string(const),'-',string(eq)));%make root folder to store generated images
        copyfile('D:\Github\STADS-MILS\STADS\OLS\SIS\Input and Constants\sis_input.mat',strcat('D:\IITBSSP\FOV_13\Constellations\',string(const),'-',string(eq)) );
        %copy sis_input file to root folder
    
        %writing path into STADS_SIS.m
        %create a variable named path in the workspace
        path = strcat("D:\IITBSSP\FOV_13\Constellations\",string(const),'-',string(eq));
        %run SIS
        run('D:\Github\STADS-MILS\STADS\OLS\SIS\STADS_SIS.m')   
    end
end
