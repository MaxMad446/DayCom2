package main

// Auto-generated | 2026-05-13T20:38:02.992262
import "fmt"

func Process_675() int {
    base := 405
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
