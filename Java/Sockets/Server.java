import java.io.*;
import java.net.*;

public class Server {
  //initialize socket and input stream
  private Socket socket = null;
  private ServerSocket server = null;
  private DataInputStream socketInputReader = null;
  private DataOutputStream out = null;

  // constructor with port
  public Server(int port) {
    // starts server and waits for a connection
    try {
      server = new ServerSocket(port);
      System.out.println("Server started");

      System.out.println("Waiting for a client ...");

      socket = server.accept();
      System.out.println("Client accepted");

      // takes input from the client socket
      socketInputReader =
        new DataInputStream(new BufferedInputStream(socket.getInputStream()));
     

      out = new DataOutputStream(socket.getOutputStream());

      String socketLine = "";
      
      // reads message from client until "exit" is sent
      while (!socketLine.equals("exit")) {
        try {
          socketLine = socketInputReader.readUTF();
          System.out.println("Client: " + socketLine);
        } catch (IOException i) {
          System.out.println(i);
        }
      }

      System.out.println("Closing connection");

      // close connection
      socket.close();
      socketInputReader.close();
    } catch (IOException i) {
      System.out.println(i);
    }
  }

  public static void main(String args[]) {
    Server server = new Server(5000);
  }
}
