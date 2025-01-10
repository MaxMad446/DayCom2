package main

// Auto-generated | 2026-05-12T03:54:16.108599
import "fmt"

func Process_388() int {
    base := 122
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_388())
}
