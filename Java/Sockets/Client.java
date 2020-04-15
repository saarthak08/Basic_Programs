import java.io.*;
import java.net.*;

public class Client {
  // initialize socket and input output streams
  private Socket socket = null;
  private BufferedReader terminalInputReader = null;
  private DataOutputStream out = null;

  // constructor to put ip address and port
  public Client(String address, int port) {
    // establish a connection
    try {
      socket = new Socket(address, port);
      System.out.println("Connected to Server.");

      // takes input from terminal
      terminalInputReader =
        new BufferedReader(new InputStreamReader(System.in));
    
      // sends output to the socket
      out = new DataOutputStream(socket.getOutputStream());
    } catch (UnknownHostException u) {
      System.out.println(u);
    } catch (IOException i) {
      System.out.println(i);
    }

    // string to read message from input
    String terminalInputLine = "";

    // keep reading until "exit" is input
    while ( !terminalInputLine.equals("exit")) {
      try {
        terminalInputLine = terminalInputReader.readLine();
        out.writeUTF(terminalInputLine);
      } catch (IOException i) {
        System.out.println(i);
      }
    }

    // close the connection
    try {
      terminalInputReader.close();
      out.close();
      socket.close();
    } catch (IOException i) {
      System.out.println(i);
    }
  }

  public static void main(String args[]) {
    Client client = new Client("127.0.0.1", 5000);
  }
}
