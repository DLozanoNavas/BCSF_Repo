using System.Data.SQLite;


string dbName = "data.db";

SQLiteConnection.CreateFile(dbName);

SQLiteConnection m_dbConnection = new SQLiteConnection($"Data Source={dbName};Version=3;");
m_dbConnection.Open();

string sql = "create table highscores (name varchar(20), score int)";

SQLiteCommand command = new SQLiteCommand(sql, m_dbConnection);
command.ExecuteNonQuery();

sql = "insert into highscores (name, score) values ('Me', 9001)";

command = new SQLiteCommand(sql, m_dbConnection);
command.ExecuteNonQuery();

sql = "insert into highscores (name, score) values ('You', 789)";

command = new SQLiteCommand(sql, m_dbConnection);
command.ExecuteNonQuery();



sql = "insert into highscores (name, score) values ('She', 456)";

command = new SQLiteCommand(sql, m_dbConnection);
command.ExecuteNonQuery();



sql = "insert into highscores (name, score) values ('He', 123)";

command = new SQLiteCommand(sql, m_dbConnection);
command.ExecuteNonQuery();



sql = "select name, score from highscores";

command = new SQLiteCommand(sql, m_dbConnection);

var response = command.ExecuteReader();


while (response.Read())
{
    Console.WriteLine($"Name: {response.GetValue(0)} Score: {response.GetValue(1)}");
}


m_dbConnection.Close();
