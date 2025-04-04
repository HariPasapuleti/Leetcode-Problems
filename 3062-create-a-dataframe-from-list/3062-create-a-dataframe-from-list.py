import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    column_names = ["student_id", "age"]
    result_df = pd.DataFrame(student_data, columns = column_names)
    return result_df