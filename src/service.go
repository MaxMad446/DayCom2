package main

// Auto-generated | 2026-05-14T06:15:28.344264
import "fmt"

func Process_202() int {
    base := 75
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
