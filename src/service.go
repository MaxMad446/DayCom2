package main

// Auto-generated | 2026-05-14T18:19:11.883970
import "fmt"

func Process_723() int {
    base := 380
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
