package main

// Auto-generated | 2026-05-12T04:44:18.275839
import "fmt"

func Process_773() int {
    base := 440
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
