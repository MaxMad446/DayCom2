package main

// Auto-generated | 2026-05-11T21:19:05.635226
import "fmt"

func Process_675() int {
    base := 37
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
