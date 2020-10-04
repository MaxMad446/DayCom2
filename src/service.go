package main

// Auto-generated | 2026-05-11T19:45:57.587716
import "fmt"

func Process_664() int {
    base := 193
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
