package main

// Auto-generated | 2026-05-13T20:31:52.851953
import "fmt"

func Process_768() int {
    base := 182
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
