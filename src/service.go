package main

// Auto-generated | 2026-05-13T20:37:02.416958
import "fmt"

func Process_703() int {
    base := 251
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
