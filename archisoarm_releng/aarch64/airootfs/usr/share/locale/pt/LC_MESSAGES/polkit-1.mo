��          �   %   �      `  !   a  !   �  #   �     �  ,   �          /  >   6  D   u  ;   �  �   �     �  %   �  #   �     
  $     "   2     U  ,   f  ,   �  %   �     �  )        .  c  ;     �	  �  �	  "   i  &   �  -   �     �  /         0     O  Q   V  \   �  O     �   U  
   '  =   2  -   p     �  *   �  *   �     �  3     -   B  -   p  )   �  0   �     �  �  
     �                                        	                                                                             
       %s: Argument expected after `%s'
 %s: Invalid --process value `%s'
 %s: Invalid process specifier `%s'
 %s: Subject not specified
 %s: Two arguments expected after `--detail'
 %s: Unexpected argument `%s'
 ACTION Authentication is needed to run `$(program)' as the super user Authentication is needed to run `$(program)' as user $(user.display) Authentication is required to run a program as another user Authentication is required to run the polkit example program Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUS_NAME Close FD when the agent is registered Don't replace existing agent if any FD Only output information about ACTION Output detailed action information PID[,START_TIME] Register the agent for the owner of BUS_NAME Register the agent for the specified process Report bugs to: %s
%s home page: <%s> Run a program as another user Run the polkit example program Frobnicate Show version Usage:
  pkcheck [OPTION...]

Help Options:
  -h, --help                         Show help options

Application Options:
  -a, --action-id=ACTION             Check authorization to perform ACTION
  -u, --allow-user-interaction       Interact with the user if necessary
  -d, --details=KEY VALUE            Add (KEY, VALUE) to information about the action
  --enable-internal-agent            Use an internal authentication agent if necessary
  --list-temp                        List temporary authorizations for current session
  -p, --process=PID[,START_TIME,UID] Check authorization of specified process
  --revoke-temp                      Revoke all temporary authorizations for current session
  -s, --system-bus-name=BUS_NAME     Check authorization of owner of BUS_NAME
  --version                          Show version

Report bugs to: %s
%s home page: <%s>
 [--action-id ACTION] Project-Id-Version: polkit master
Report-Msgid-Bugs-To: https://gitlab.freedesktop.org/polkit/polkit/issues
PO-Revision-Date: 2021-06-12 16:37+0100
Last-Translator: Hugo Carvalho <hugokarvalho@hotmail.com>
Language-Team: Portuguese (https://l10n.gnome.org/teams/pt/)
Language: pt
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n > 1);
X-Generator: Poedit 3.0
 %s: Esperava argumento após '%s'
 %s: Valor '%s' inválido de --process
 %s: Especificador do processo '%s' inválido
 %s: Sujeito não especificado
 %s: Dois argumentos esperados após '--detail'
 %s: Argumento inesperado '%s'
 AÇÃO A autenticação é necessária para executar `$(program)' como o superutilizador A autenticação é necessária para executar `$(program)' como o utilizador $(user.display) A autenticação é necessária para executar um programa como outro utilizador A autenticação é necessária para executar o exemplo de programa do polkit Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BARRAMENTO Fecha o descritor de ficheiro FD quando o agente é registado Não substitui o agente existente, seu houver FD Apresenta apenas informação sobre AÇÃO Apresenta informação detalhada da ação PID[,HORÁRIO_INÍCIO] Regista o agente para o proprietário do BARRAMENTO Regista o agente para o processo especificado Relate erros para: %s
Página web do %s: <%s> Executa um programa como outro utilizador Executa Frobnicate, o programa exemplo do polkit Mostra a versão Utilização:
  pkcheck [OPÇÃO...]

Opções de ajuda:
  -h, --help                         Mostra as opções de ajuda

Opções da aplicação:
  -a, --action-id=AÇÃO               Verifica autorização para realizar AÇÃO
  -u, --allow-user-interaction       Interage com o utilizador, se necessário
  -d, --details=CHAVE VALOR          Adiciona (CHAVE, VALOR) à informação
                                      sobre a ação
  --enable-internal-agent            Usa um agente de autenticação interno,
                                      se necessário
  --list-temp                        Lista autorizações temporárias para a
                                      sessão atual
  -p, --process=PID[,START_TIME,UID] Verifica autorização do processo
                                      especificado
  --revoke-temp                      Revoga todas as autorizações
                                      temporárias para sessão atual
  -s, --system-bus-name=BARRAMENTO   Verifica a autorização do proprietário do
                                      BARRAMENTO
  --version                          Mostra a versão

Relate erros para: %s
Página web do %s: <%s>
 [--action-id AÇÃO] 