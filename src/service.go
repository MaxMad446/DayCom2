package main

// Auto-generated | 2026-05-11T19:48:42.163093
import "fmt"

func Process_552() int {
    base := 313
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_552())
}
