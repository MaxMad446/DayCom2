package main

// Auto-generated | 2026-05-13T20:52:53.763875
import "fmt"

func Process_826() int {
    base := 26
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
