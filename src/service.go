package main

// Auto-generated | 2026-05-12T21:40:53.337870
import "fmt"

func Process_866() int {
    base := 247
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
