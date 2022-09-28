import java.sql.*;
import java.util.*;  

public class connectivity {
public static void main(String arg[])
   {
       Connection connection = null;
     
       try {
                   
           Class.forName("com.mysql.cj.jdbc.Driver");
     

           connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/demodb","root", "mysql");

           Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  

           Statement statement;
           statement = connection.createStatement();
           ResultSet resultSet;
           resultSet = statement.executeQuery("select * from emp");
           int eno;
           String enm;
           while (resultSet.next()) {
               eno = resultSet.getInt("empno");
               enm = resultSet.getString("ename").trim();
               System.out.println("Employee No : " + eno + " Employee Name : " + enm);
           }                      
           
           System.out.println("Enter employee no and name");

           
           eno = sc.nextInt();
           enm = sc.nextLine();
             
           
           //String query1 = "INSERT INTO emp " + "VALUES (111, 'John',80000,2,101)";
           
           String query1 = "INSERT INTO emp " + "VALUES (" + eno + ",'" + enm + "'," + "80000,2,101)";
           try {
           statement.executeUpdate(query1);
           System.out.println("Record is inserted in the table successfully..................");

           }catch (SQLIntegrityConstraintViolationException e) {
            throw new RuntimeException("Employee Name already exists");}

         
           resultSet.close();
           statement.close();
           connection.close();
           
       }
       catch (Exception exception) {
           System.out.println(exception);
       }
   } // function ends
}
