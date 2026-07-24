import sys

def main():

    input_data = sys.stdin.read().split()
    if not input_data:

        return

    referenceDay = int(input_data[0])
    num_machines = int(input_data[1])
    num_profiles = int(input_data[2])
    num_readings = int(input_data[3])
    num_maint = int(input_data[4])
    num_faults = int(input_data[5])

    idx = 6
    machines = {}
    machine_order = []

    for _ in range(num_machines):
        m_id = input_data[idx]
        m_name = input_data[idx+1]
        m_type = input_data[idx+2]
        machines[m_id] = {'name' : m_name ,'type' :m_type}
        machine_order.append(m_id)

        idx += 3


    profiles ={}

    for _ in range(num_profiles):
        p_type = input_data[idx]
        p_maxt = int(input_data[idx+1])
        p_maxv = int(input_data[idx])
        profiles[p_type]= {'maxT' : p_maxt 'maxV':p_maxv}




    












     



