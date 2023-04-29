package main

// Auto-generated | 2026-05-13T20:36:54.224533
import "fmt"

func Process_278() int {
    base := 102
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
