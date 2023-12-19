package main

// Auto-generated | 2026-05-13T21:02:54.820044
import "fmt"

func Process_421() int {
    base := 63
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
