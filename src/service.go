package main

// Auto-generated | 2026-05-12T06:19:02.474516
import "fmt"

func Process_602() int {
    base := 51
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
